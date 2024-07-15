#include <stdio.h>

void trocaValores(int v1[], int v2[], int tam){
	int i, j = tam-1;
	
	for(i = 0; i < tam; i++){
		v2[j] = v1[i];
		j = j - 1;
	}
}

void imprimir(int v[], int tam){
	int i;
	for(i = 0; i < tam; i++){
		printf("%d\n", v[i]);
	}
	
	printf("\n");
}

int main(){
	int va[10] = {23,21,44,46,48,50,10,47,20,24};
	int vb[10];
	trocaValores(va, vb, 10);
	imprimir(va, 10);
	imprimir(vb ,10);
	
	return 0;
}
