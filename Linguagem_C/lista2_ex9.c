#include<stdio.h>
int main(void){
	float pos, soma=0;
	for(pos=6; pos<=52; pos=pos+2){
		soma= soma + (pos/(pos+1.0));
	}
	printf("Soma= %.3f", soma);
	
	return 0;
}

//Somar (6/7)+(8/9)+(10/11)+...+(50/51)+(52/53)
//Programa para calcular e mostrar o resultado da Série numérica:
//S = 6/7 + 8/9 + 10/11 + ... + 50/51 + 52/53
