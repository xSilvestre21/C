#include<stdio.h>
int main(void){
	float pos, soma=0;
	for(pos=4; pos<=57; pos=pos+1){
		soma= soma + (3/pos);
	}
	printf("Soma= %.3f", soma);
	
	return 0;
}

//Somar (3/4)+(3/5)+(3/6)+...+(3/56)+(3/57)
//Programa para calcular e mostrar o resultado da Série numérica:
//S = 3/4 + 3/5 + 3/6 + ... + 3/56 + 3/57
