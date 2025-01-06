#include <stdio.h>
int main(void){
	int num1, num2, *apt;
	printf("Digite um numero: ");
	apt = &num1;
	scanf("%d", apt);
	printf("Digite o segundo numero: ");
	apt = &num2;
	scanf("%d", apt);
	printf("%d e %d", num1, num2);
	return 0;
}


/* Escreva um programa C que leia 2 valores inteiros
usando um apontador. Depois mostre os valores lidos*/
 
