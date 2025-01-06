#include<stdio.h>
int main(void){
	float soma=0;
	int pos;
	for(pos=1; pos<=100; pos++){
		soma= soma+pos/(101.0-pos);
	}
	printf("Soma= %2.f\n", soma);
	return 0;
}

//Escreva um programa para mostrar o resultado da seguinte série numérica:
// S= 1/100 + 2/99 + 3/98 + 4/97 + ... 98/3 + 99/2 + 100/1.
