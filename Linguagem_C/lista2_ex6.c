#include<stdio.h>
int main(void){
	int pos, soma=0;
	for(pos=2; pos<=29; pos=pos+1){
		soma= soma + (pos*(pos+1));
	}
	printf("Soma= %d", soma);
	
	return 0;
}

//Somar n*(n+1) com n variando de 2 a 29
//Programa para calcular e mostrar o resultado da Série numérica:
//S = 2*3 + 3*4 + 4*5 + ... + 28*29 + 29*30
