#include <stdio.h>

int main(){
//	char c;
//	printf("Digite uma letra ou numero: ");
//	scanf("%c", &c); //c = getchar();
//	if((c >= '0') && (c <= '9')){
//		printf("Eh um numero");
//	}else if((c >= 'a') && (c <= 'z')){
//		printf("Eh uma letra minuscula");
//	}else if((c >= 'A') && (c <= 'Z')){
//		printf("Eh uma letra maiuscula");
//	}else{
//		printf("Eh outro simbolo");
//	}

//	char cidade[4] "Rio";
//	char disc[40] = "Algoritmo";
//	char s1[] = "";
//	char s[20];
//	printf("Digite uma string: ");
//	fgets(s, 20, stdin);
//	printf("String digitada: ");
//	puts(s);

	char str[30];
	int i, n;
	printf("Digite uma string: ");
	fgets(str,30, stdin);
	
	for(i = 0; str[i] != '\0'; i++){
		n++;
		
		printf("\nO tamanho \%s\ ");
	}
	
	return 0;
}
