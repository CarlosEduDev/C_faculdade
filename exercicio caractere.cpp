#include <stdio.h>
#include <ctype.h> // biblioteca para manipular caracteres

#define MAX_CARAC 50

void estatisticaString(char str[]){
	int i, vogais = 0, consoantes = 0, outros = 0;
	
	for(i = 0; str[i] != '\0'; i++){
		char vogal = tolower(str[i]); // converte os caracteres para minúsculas para facilitar a veritifação de vogais
		
		if(isalpha(vogal)){
			if(vogal == 'a' || vogal == 'e' || vogal == 'i' || vogal == 'o' || vogal == 'u'){
				vogais++;
			}else{
				consoantes++;
			}
		}else{
			outros++;
		}
	}
	
	printf("Estatistica da string:\n");
	printf("Vogais: %d\n", vogais);
	printf("Consoantes: %d\n", consoantes);
	printf("Outros caracteres: %d\n", outros);
}

int main(){
	char str[MAX_CARAC + 1];
	
	printf("Digite uma string(maximo %d caracteres): ", MAX_CARAC);
	fgets(str, sizeof(str), stdin); //sizeof serve para não ler mais caracteres que tem na array str
	
	estatisticaString(str);
}
