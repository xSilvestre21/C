#include<stdio.h>
int main(void){
	int pos, soma=0;
	for(pos=2; pos<=175; pos++){
		soma= soma + pos;
	}
	printf("Soma= %d", soma);
	
	return 0;
}

//Somar de 2 a 175
//Programa para calcular e mostrar o resultado da Série numérica:
//S = 2 + 3 + 4 + ... + 174 + 175
