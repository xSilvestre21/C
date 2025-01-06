#include<stdio.h>
int main(void){
	int x;
	printf("Digite um numero: ");
	scanf("%d", &x);
	printf("Largura= ");
	printf("%d\n", 2*x+3);
	printf("Area= ");
	printf("%d\n", (2*x+3)*8);
	
	return 0;
}

//Sabendo que a frente de um terreno mede 8 metros e sua largura pode ser calculada
//com a fórmula largura = 2x + 3 construa um programa que leia o valor de x do
//teclado e apresente a área deste terreno.
