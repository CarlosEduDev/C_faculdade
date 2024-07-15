#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Remove espaços e acentuações das strings
void remover_espacos_acentuacoes(const char *entrada, char *saida){
	int i = 0;
	
	while(*entrada){
		// Ignora os espaços
		if(*entrada != ' '){
			// substitui os caracteres de letras maiusculas e minusculass que têm acentos e ç
			switch(*entrada){
				case 'á': case 'â': case 'à': case 'ä': case 'ã': saida[i] = 'a'; 
					break;
					case 'Á': case 'Â': case 'À': case 'Ä': case 'Ã': saida[i] = 'A'; 
					break;
					
				case 'é': case 'è': case 'ê': case 'ë': saida[i] = 'e';
					break;
					case 'É': case 'È': case 'Ê': case 'Ë': saida[i] = 'E';
					break;
					
				case 'í': case 'ì': case 'ï': case 'î': saida[i] = 'i';
					break;
					case 'Í': case 'Ì': case 'Ï': case 'Î': saida[i] = 'I';
					break;
					
				case 'ó': case 'ò': case 'ô': case 'ö': case 'õ': saida[i] = 'o';
					break;
					case 'Ó': case 'Ò': case 'Ô': case 'Ö': case 'Õ': saida[i] = 'O';
					break;
					
				case 'ú': case 'ù': case 'ü': case 'û': saida[i] = 'u';
					break;
					case 'Ú': case 'Ù': case 'Ü': case 'Û': saida[i] = 'U';
					break;
					
				case 'ç': saida[i] = 'c';
					break;
					case 'Ç': saida[i] = 'C';
					break;
			}
			i++;
		}
		
		entrada++; // entrada++ irá percorrer por cada caractere
	}
	
	saida[i] = '\0';
}

int comparar_strings(const char *str1, const char *str2){
	char string1_processada[100]; 
	char string2_processada[100];
	
	
	remover_espacos_acentuacoes(str1, string1_processada);
	remover_espacos_acentuacoes(str2, string2_processada);
	
	
	//comparar as strings preprocessadas
	return strcmp(string1_processada, string2_processada);
	//o retorno da função strcmp vai ser 0 se caso for falsa e 1 se for true
}


int main(int argc, char const *argv[])
{
    char str1[100];
    char str2[100];
    
//    if(str1 == NULL || str2 == NULL){
//    	printf("Erro de alocacao na memoria\n");
//    	return 1;
//	}
    
    printf("Digite algo:\n ");
    scanf("%99s", &str1);
    
      printf("Digite de novo: ");
      scanf("%99s", &str2);
    
    if(comparar_strings(str1, str2) == 0){
    	printf("\nAs string sao iguais\n");
	}else{
		printf("\nAs strings sao diferentes");
	}
	
	
//	free(str1);
//	free(str2);	
    return 0;
}
