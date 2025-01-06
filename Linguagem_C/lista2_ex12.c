#include<stdio.h>
int main(void){
	float pos, qtd, soma=0;
	printf("Digite um valor para x: ");
	scanf("%f", &qtd);
	for(pos=0; pos<=qtd; pos=pos+1){
		soma= soma + (5/qtd)*(1,2*pos);
	}
	printf("Soma= %.1f", soma);
	
	return 0;
}

//Somar (Base * Altura(x)), onde Base=5/qtd, Altura eh calculada com a fórmula
//Altura=1,2*x, com x variando de 0 ate qtd e qtd eh digitado pelo usuário.
//Programa para calcular e mostrar o resultado da soma de áreas:
//qtd é número inteiro digitado pelo usuário:
//Base = 5/qtd
//Altura = 1,2 * x
//x varia de 0 ate qtd
//S = Base * Altura(1) + Base * Altura(2) + Base * Altura(3) + ... + Base * Altura(qtd-1) +
//Base * Altura(qtd)
//Obs.: experimente executar várias vezes com qtd variando de 10 em 10. Informe se S se
//aproxima de algum valor.
