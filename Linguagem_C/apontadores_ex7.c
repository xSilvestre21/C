#include <stdio.h>
#include <stdlib.h> // STDLIB.H

int main(void){
	int *apt, *apt2;
	if(!(apt = malloc(sizeof(int)))){
		printf("Faltou memoria! \n");
		exit(1);
	}
	if(!(apt2 = malloc(sizeof(int)))){
		printf("Faltou memoria! \n");
		exit(1);
	}
	
	printf("Digite um numero: ");
	scanf("%d", apt);
	printf("Digite um numero: ");
	scanf("%d", apt2);
	printf("Valor: %d\n", *apt + *apt2);
	free(apt);
	
	return 0;
}
