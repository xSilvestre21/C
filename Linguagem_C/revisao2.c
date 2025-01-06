#include<stdio.h>
#include<stdlib.h>
int main(void){
	int *num1, *num2;
	if(!(num1 = malloc(sizeof(int)))){
		printf("Faltou memoria!\n");
		exit(1);
	}
	if(!(num2 = malloc(sizeof(int)))){
		printf("Faltou memoria!\n");
		exit(2);
	}
	printf("Digite o primeiro numero: ");
	scanf("%d", num1);
	printf("Digite o segundo numero: ");
	scanf("%d", num2);
	printf("Soma: %d", *num1 + *num2);
	free(num1);
	free(num2); // Sua ausência pode causar vazamento na memória.
	return 0;
}

/* Altere o programa anterior de modo que ele não use variáveis estáticas*/
