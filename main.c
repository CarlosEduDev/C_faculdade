#include <Stdio.h>
#include <stdlib.h>
#include "Strings.h"

int main(int argc, char *argv[]){
	char str[7] = "AAAAAAC", sr[7] = "AAAAAAC";

//	testando
	printf("%d", verificarSubString(str, sr));
	
	return 0;
	
	
}
