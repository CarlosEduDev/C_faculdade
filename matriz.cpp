#include <stdio.h>

void receberMatriz(float matriz[4][2]){
	int i, j;
	
	printf("Recebendo matriz:\n ");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 2; j++){
			scanf("%f", &matriz[i][j]);
		}
	};
}

void somarMatriz(float matriz1[4][2], float matriz2[4][2]){
	int i, j;
	float mTemp[4][2];
	
	printf("Somado matrizes:\n ");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 2; j++){
			mTemp[i][j] = matriz1[i][j] + matriz2[4][2];
		}
	};
	
	printf("Imprimindo a soma dos matrizes:\n ");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 2; j++){
			printf("%f", mTemp[i][j]);
		}
		printf("\n");
	};
}

int main(){
//	float matriz[3][4];
	int i, j;
//	
//	outraMatriz[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}}
	
//	matriz[0][0] = 0.0;
//	matriz[0][1] = 0.1;
//	matriz[0][2] = 0.2;
//	matriz[0][3] = 0.3;
//	
//	matriz[1][0] = 1.0;
//	matriz[1][1] = 1.1;
//	matriz[1][2] = 1.2;
//	matriz[1][3] = 1.3;
//	
//	matriz[2][0] = 2.0;
//	matriz[2][1] = 2.1;
//	matriz[2][2] = 2.2;
//	matriz[2][3] = 2.3;

//	for(i = 0; i < 3; i++){
//			for(j = 0; j < 4; j++){
//				printf("Lendo na posicao %d %d", i, j);
//				scanf("%f", &matriz[i][j]);
//			}
//		}
//	
//	for(i = 0; i < 3; i++){
//		for(j = 0; j < 4; j++){
//			printf("Lendo na posicao %.1f", matriz[i][j]);
//		}
//		printf("\n");
//	}

//	int numeros[4][4];
//	
//	printf("Digite numeros: ");
//	for(i = 0; i < 4; i++){
//		for(j = 0; j < 4; j++){
//			scanf("%d", &numeros[i][j]);
//		}
//	}
//	
//	printf("Matriz alterada: \n");
//	for(i = 0; i < 4; i++){
//		for(j = 0; j < 4; j++){
//			if(numeros[i][j] > 5){
//				numeros[i][j] = 0;
//			}
//			printf("%d ", numeros[i][j]);
//		}
//		printf("\n");
//	}
	
	float m1[4][2];
	float m2[4][2];
	
	receberMatriz(m1);
	receberMatriz(m2);
	
	somarMatriz(m1, m2);
	
	
	return 0;
}
