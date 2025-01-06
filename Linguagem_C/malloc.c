#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int *numA, *numB;
	if(!(numA = malloc(sizeof(int)))) {
		printf("Faltou memoria!\n");
		exit(1);
	}
	if(!(numB = malloc(sizeof(int)))) {
		printf("Faltou memoria!\n");
		exit(2);
	}
	
	printf("Digite um numero: ");
	scanf("%d", numA);
	printf("Digite outro numero: ");
	scanf("%d", numB);
	printf("Soma = %d\n", *numA + *numB);
	free(numA);
	free(numB);
	return 0;
}
