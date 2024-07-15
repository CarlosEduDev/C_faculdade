#include <stdio.h>

int main(){
	int i, j, a;
	
	for (i=50; i>0; i--){
		printf ("%2d - ", i);
		for (j=0; j<50; j++){
			if (j*j - 4*j + 4 == i)	printf ("* ");
			
			else printf ("  ");
		}
		printf ("\n");
	}
	for (i=0; i<50; i++){
		printf ("-");
	}
	
}
