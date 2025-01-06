#include<stdio.h>
int main(void) {
	int qtd, lin, col;
	printf("Digite a qtd: ");
	scanf("%d", &qtd);
	for(lin = 0; lin < qtd; lin++) {
		for(col = 0; col < qtd; col++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}



// Escreva um programa que pede um numero para o usuario e desenhe um retângulo
// com a quantidade de linhas digitadas pelo usuário. 
