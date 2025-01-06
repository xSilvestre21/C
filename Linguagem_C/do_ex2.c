#include<stdio.h>
int main(void){
	int n1, n2;
	printf("Digite um numero: ");
	scanf("%d", &n1);
	do{
		printf("Digite o segundo numero (diferente): ");
		scanf("%d", &n2);
	}while(n1==n2);
	printf("Primeiro: %d e Segundo: %d\n", n1, n2);
	return 0;
}

//Carrega 2 números e garante que o segudo seja diferente do primeiro.
