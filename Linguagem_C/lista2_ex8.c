#include<stdio.h>
int main(void){
	float pos, soma=0;
	for(pos=2; pos<=40; pos=pos+1){
		soma= soma + (pos/(pos+1.0));
	}
	printf("Soma= %.3f", soma);
	
	return 0;
}

//Somar (2/3)+(3/4)+(4/5)+...+(39/40)+(40/41)
//Programa para calcular e mostrar o resultado da Série numérica:
//S = 2/3 + 3/4 + 4/5 + ... + 39/40 + 40/41
