#include <stdio.h>
#include <String.h>

//void imprimirMaioresMedia(float vetor[], int tam){
//	int i;
//	float soma, media;
//	
//	for(i = 0; i < tam; i++){
//		soma = soma + vetor[i];
//	}
//	
//	media = soma/tam;
//	
//	for(i = 0; i < tam; i++){
//		if(vetor[i] >= media){
//			printf("%d: %f\n", i, vetor[i]);
//		}
//	}
//}
//
//void imprimirPosicaoEvalor(float vetor[], int tam){
//	int i;
//	float valor;
//	
//	for(i = 0; i < tam; i++){
//		if(vetor[i] < vetor[tam-1]){
//			printf("%d: %f", i, vetor[i]);
//		}
//	}
//	
//}
//
//void copiarSemEspaco(char string[], char copia[]){
//	int i,j = 0;
//	
//	for(i = 0; string[i] != '\0'; i++, j++){
//		if(string[i] != ' '){
//			copia[j] = string[i];
//			j++;
//		}
//	}
//	
//	copia[j] = '\0';
//}

//void transposta(int origem[3][3], int dest[3][3]){
//	int i, j;
//	
//	for(i = 0; i < 3; i++){
//		for(j = 0; j < 3; j++){
//			dest[j][i] = origem[i][j];
//		}
//	}
//}
//
//void mediaMatriz(int origem[3][3], int dest[3][3]){
//	int i,j, totalElementos = 9 * 2, soma = 0;
//	
//	for(i = 0; i < 3; i++){
//		for(j = 0; j < 3; j++){
//			soma+= origem[i][j] + dest[i][j];
//		}
//	}
//	float media = (float)soma / totalElementos;
//	
//	printf("%.2f Eh a media da matriz", media);
//}


void troca(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){

	
	
	
//	int x = 10, y = 20;
//	
//	printf("Antes da troca: x = %d, y = %d\n", x, y);
//	
//	troca(&x, &y);
//	
//	printf("Depois da troca: x = %d, y = %d", x, y);

// int notas[100], j, numAlunos;

// printf("Digite o numero de alunos: ");
// scanf("%d", &numAlunos);

// for(j = 0; j < numAlunos; j++){
// 	printf("Nota do %d. aluno: ", j+1);
// 	scanf("%d", &notas[j]);
// }
// 	if(notas[j] >= 6){
// 		printf("Notas acima da media: %d\n", notas[j]);
// 	}
// printf("Fim do programa");
	
	
//	char palavra[] = "Porto velho";
//	char destino[20];
//	
//	copiarSemEspaco(palavra, destino);
//	
//	puts(destino);
//	char palavra[] = "cachorro";
//	int i, j = 0, ehPalindromo = 1;
//	
//	// medir o tamanho da palavra
//	for(i = 0; palavra[i] != '\0'; i++){
//		
//		j++;
//	}
//	
//	// verificar se � palindromo
//	for(i = 0; palavra[i] != '\0'; i++){
//		if(palavra[i] != palavra[j-1]){
//			ehPalindromo = 0;
//		}
//		j--;
//	}
//	
//	if(ehPalindromo == 1){
//		printf("A palavra e palindromo");
//	}else{
//		printf("A palavra nao e palindromo");
//	}
	
	return 0;
}
