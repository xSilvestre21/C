#include<stdio.h>
int main(void){
	int pos, soma=0;
	for(pos=1; pos<=100; pos++){
		soma= soma + pos;
	}
	printf("Soma= %d", soma);
	
	return 0;
}

//Somar de 1 a 100
//Programa para calcular e mostrar o resultado da Série numérica:
//S = 1 + 2 + 3 + ... + 99 + 100
