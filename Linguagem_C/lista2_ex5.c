#include<stdio.h>
int main(void){
	int pos, soma=0;
	for(pos=7; pos<=41; pos=pos+1){
		soma= soma + (5*pos);
	}
	printf("Soma= %d", soma);
	
	return 0;
}

//Somar (5*7)+(5*8+(5*9)+...+(5*40)+(5*41)
//Programa para calcular e mostrar o resultado da Série numérica:
//S = 5*7 + 5*8 + 5*9 + ... + 5*40 + 5*41
