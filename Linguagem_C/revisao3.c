#include<stdio.h>

int main(void){
	float soma = 0, pos;
	for(pos = 1; pos < 100; pos++){
		soma = soma + 1/pos;
	}
	printf("%.2f", soma);
	return 0;
}

// Escreva um programa em C para mostrar o resultado da sequência numérica.
