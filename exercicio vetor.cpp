#include <stdio.h>
#include <math.h>

#define MAX_ALUNOS 100

void preencherVetor(float vetor[], int nAlunos, char* nome){
	int i;
	printf("Digite as notas para %s: \n", nome);
	
	for(i = 0; i < nAlunos; i++){
		printf("Nota do aluno %d: ", i + 1);
		scanf("%f", &vetor[i]);
	}
}

void imprimirVetor(float v[], int tam, char* nome){
	int i;
	printf("Notas de %s: \n", nome);
	for(i = 0; i < tam; i++){
		printf("Aluno %d: %.2f\n ", i+1, v[i]);
	}
}

void imprimirNotaFinal(float P1[], float P2[], float P3[], int nAlunos){
	int i;
	printf("Nota final dos alunos: \n");
	
	for(i = 0; i < nAlunos; i++){
		float notaFinal = (P1[i] + P2[i] + 2*P3[i]) / 4;
		printf("Aluno numero %d: %.2f\n", i+1, notaFinal);
	}
}

void imprimirNotasAbaixoDe60(float P1[], float P2[], float P3[], int nAlunos){
	int i;
	printf("Indices com nota final abaixo de 60:\n");
	
	for(i = 0; i < nAlunos; i++){
		float notaFinal = (P1[i] + P2[i] + 2*P3[i]) / 4;
		if(notaFinal < 60){
			printf("Aluno numero %d\n ", i+1);
			printf("------------------\n");
		}
	}
}

int imprimirNumeroNotasAcimaDe60(float P1[], float P2[], float P3[], int nAlunos){
	int i, contAcima = 0;
	
	for(i = 0; i < nAlunos; i++){
		float notaFinal  = (P1[i] + P2[i] + 2*P3[i]) / 4;
		if(notaFinal >= 60){
			contAcima++;
		}
	}
	
	return contAcima;
}


int main(){
	float P1[MAX_ALUNOS], P2[MAX_ALUNOS], P3[MAX_ALUNOS];
	int numAlunos, opcao;
	
	printf("Digite o numero de alunos (ate 100):");
	scanf("%d", &numAlunos);
	
	preencherVetor(P1, numAlunos, "P1");
	preencherVetor(P2, numAlunos, "P2");
	preencherVetor(P3, numAlunos, "P3");
	
	do{
		printf("\n----------Menu----------\n");
		printf("---------------------------------------------------------\n");
		printf("1 - Imprimir notas da Prova 1\n");
		printf("---------------------------------------------------------\n");
		printf("2 - Imprimir notas da Prova 2\n");
		printf("---------------------------------------------------------\n");
		printf("3 - Imprimir notas da Prova 3\n");
		printf("---------------------------------------------------------\n");
		printf("4 - Imprimir nota final de cada aluno\n");
		printf("---------------------------------------------------------\n");
		printf("5 - Imprimir indices com nota final abaixo de 60\n");
		printf("---------------------------------------------------------\n");
		printf("6 - Retornar numero de notas final acima ou iguais a 60\n");
		printf("---------------------------------------------------------\n");
		printf("0 - Sair\n");
		printf("---------------------------------------------------------\n");
		printf("Digite uma opcao: ");
		scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			imprimirVetor(P1, numAlunos, "Prova 1");
			break;
		case 2:
			imprimirVetor(P2, numAlunos, "Prova 2");
			break;
		case 3:
			imprimirVetor(P3, numAlunos, "Prova 3");
			break;
			
		case 4:
			imprimirNotaFinal(P1, P2, P3, numAlunos);
			break;
			
		case 5:
			imprimirNotasAbaixoDe60(P1, P2, P3, numAlunos);
			break;
			
		case 6:
			printf("Numero de notas finais acima de 60: %d\n",imprimirNumeroNotasAcimaDe60(P1, P2, P3, numAlunos));
			break;
			
		case 0:
			printf("Fim do programa!\n");
			break;
			
		default:
			printf("Opcao invalida!");
	}
	} while(opcao != 0);
	
	return 0;
	
		
}
