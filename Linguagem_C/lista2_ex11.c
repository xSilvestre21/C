#include<stdio.h>
int main(void){
	int pos, soma=0;
	for(pos=5; pos<=34; pos=pos+1){
		soma= soma + (4*pos);
	}
	printf("Soma= %d", soma);
	
	return 0;
}

//Somar (Base * Altura(x)), com Base=6 e Altura eh calculada com a fórmula Altura=x+4,
//com x variando de 1 a 30
//Programa para calcular e mostrar o resultado da soma de áreas:
//Base * Altura(1) + Base * Altura(2) + Base * Altura(3) + ... + Base * Altura(29) + Base *
//Altura(30)
//Com Base = 4 e Altura calculada com fórmula Altura=x+4
