#include<stdio.h>
int main(void){
	int pos, soma=0;
	for(pos=4; pos<=188; pos=pos+2){
		soma= soma + pos;
	}
	printf("Soma= %d", soma);
	
	return 0;
}

//Somar os pares de 4 a 188
//Programa para calcular e mostrar o resultado da Série numérica:
//S = 4 + 6 + 8 + ... + 186 + 188
