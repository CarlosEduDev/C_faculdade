#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	printf("Digite um numero para adivinhar qual numero o programa ira apresentar a voce: ");
	
	int numerosorteio, numerouser;
	
	srand(time(NULL));
 	numerosorteio = rand()%11;
	scanf("%d", &numerouser);
	
	while(numerosorteio != numerouser){
		printf("Tente novamente: ");
		scanf("%d", &numerouser);
	}
	
	printf("Parabens! Voce adivinhou o numero!\n");
	
	return 0;
}
