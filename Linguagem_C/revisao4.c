#include<stdio.h>
int main(void){
	int pos, soma = 0;
	for(pos = 2; pos <= 100; pos = pos+2){
		soma = soma + pos;
	}
	printf("%d",  soma);
	return 0;
}

// Elabore um programa em C que mostre a soma dos pares de 1 a 100
