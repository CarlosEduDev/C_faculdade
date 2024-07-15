#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i = 2, numUser, verifEPrimo = 1;
    
    printf("Digite um numero: ");
    scanf("%d", &numUser);
    
    for(i; i < numUser; i++){
    	if(numUser % i == 0){
    		verifEPrimo = 0;
		}
	}
			
		if(verifEPrimo == 1){
			printf("Numero primo");
		}else{
			printf("Numero nao primo");
		}
    
    return 0;

}

