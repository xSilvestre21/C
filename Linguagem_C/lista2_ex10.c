#include<stdio.h>
int main(void){
	int pos, soma=0;
	for(pos=1; pos<=45; pos=pos+1){
		soma= soma + (4*pos);
	}
	printf("Soma= %d", soma);
	
	return 0;
}

//Somar (Base * Altura), com Base=4 e Altura variando de 1 a 45
//Programa para calcular e mostrar o resultado da soma de áreas:
//S = Base*Altura(1) + Base*Altura(2) + Base*Altura(3) + ... + Base*Altura(44) +
//Base*Altura(45)
//Com Base = 4 e Altura(x) variando de 1 a 45
