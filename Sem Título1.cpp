#include <stdio.h>

int main(){
	int i, j, a;
	printf ("tamanho: ");
	scanf ("%d", &a);
	for (i=0; i<a; i++){
		for (j=0; j<a; j++){
			if ((i-a/2)*(i-a/2) + (j-a/2)*(j-a/2) <= (a/4)*(a/4))	printf ("  ");
			
			else if (j-i<=a/2 && i+j >= a/2 && i-j<=a/2 && i+j < 3*a/2)		printf ("* ");
			
			else printf ("0 ");
		}
	printf ("\n");
	}
}
