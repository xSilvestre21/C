#include<stdio.h>
int main(void){
	int pos, soma=0;
	for(pos=3; pos<=98; pos=pos+1){
		soma= soma + (2*pos);
	}
	printf("Soma= %d", soma);
	
	return 0;
}

//Somar (2*3)+(2*4)+(2*5)+ ... + (2*97)+(2*98)
//Programa para calcular e mostrar o resultado da Série numérica:
//S = 2*3 + 2*4 + 2*5 + ... + 2*97 + 2*98
