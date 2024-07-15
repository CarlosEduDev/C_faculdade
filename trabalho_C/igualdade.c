#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Remove espa�os e acentua��es das strings
void remover_espacos_acentuacoes(const char *entrada, char *saida){
	int i = 0;
	
	while(*entrada){
		// Ignora os espa�os
		if(*entrada != ' '){
			// substitui os caracteres de letras maiusculas e minusculass que t�m acentos e �
			switch(*entrada){
				case '�': case '�': case '�': case '�': case '�': saida[i] = 'a'; 
					break;
					case '�': case '�': case '�': case '�': case '�': saida[i] = 'A'; 
					break;
					
				case '�': case '�': case '�': case '�': saida[i] = 'e';
					break;
					case '�': case '�': case '�': case '�': saida[i] = 'E';
					break;
					
				case '�': case '�': case '�': case '�': saida[i] = 'i';
					break;
					case '�': case '�': case '�': case '�': saida[i] = 'I';
					break;
					
				case '�': case '�': case '�': case '�': case '�': saida[i] = 'o';
					break;
					case '�': case '�': case '�': case '�': case '�': saida[i] = 'O';
					break;
					
				case '�': case '�': case '�': case '�': saida[i] = 'u';
					break;
					case '�': case '�': case '�': case '�': saida[i] = 'U';
					break;
					
				case '�': saida[i] = 'c';
					break;
					case '�': saida[i] = 'C';
					break;
			}
			i++;
		}
		
		entrada++; // entrada++ ir� percorrer por cada caractere
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
	//o retorno da fun��o strcmp vai ser 0 se caso for falsa e 1 se for true
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
