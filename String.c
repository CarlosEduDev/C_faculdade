#include <stdio.h>
#include <stdlib.h>

void copiarString(char String[], char receber[]){
	int i;
	
	for(i = 0; String[i] != '\0'; i++){
		receber[i] = String[i];
	}
}

int tamanhoString(char String[]){
	int i;
	
	for(i = 0; String[i] != '\0'; i++){
		return i + 1;
	}
}

void converterMaiusculo(char String[]){
	int i;
	
	for(i = 0; String[i] != '\0'; i++){
		if(String[i] > 64 && String[i] < 91)
		continue;
		String[i] = String[i] - 32;
	}
}

void converterMinusculo(char String[]){
	int i;
	
	for(i = 0; String[i] != '\0'; i++){
		if(String[i] > 96 && String[i] < 123){
			continue;
			
			String[i] = String[i] + 32;
		}
	}
}

void verificarStringsIguais(char String[], char outraString[]){
	int i;
	
	for(i = 0; String[i] != '\0'; i++){
		if(String[i] == outraString[i]){
			continue;
		} else return 0;
	}
}

int verificarSubString(char String[], char SubString[]){
	int i, j = 0, c;
	for(i = 0; String[i] != '\0'; i++){
		if(String[i] == SubString[j]){
			c = i;
			for(;SubString[j] != '\0'; j++, c++){
				if(String[c] != SubString[j])
					break;
				}
				
				if(SubString[j] == '\0')
					return 1;
				j = 0;
				
			}
		}
		
		return 0;
	}
