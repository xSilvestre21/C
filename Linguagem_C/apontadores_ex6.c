#include <stdio.h>
#include <stdlib.h> // STDLIB.H

int main(void){
	int *apt;
	if(!(apt = malloc(sizeof(int)))){
		printf("Faltou memoria! \n");
		exit(1);
	}
	printf("Digite um numero: ");
	scanf("%d", apt);
	printf("Valor: %d\n", *apt);
	free(apt);
	
	return 0;
}

