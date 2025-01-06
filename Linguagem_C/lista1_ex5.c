#include<stdio.h>
int main(void){
	int num;
	printf("Quantos lotes voce deseja? ");
	scanf("%d", &num);
	printf("Tamanho da frente do lote= ");
	printf("%d", 800/num);
	printf("m\n");
	printf("Area de cada terreno= ");
	printf("%d", (800/num)*20);
	printf("m^2");
	return 0;
}

//O dono um grande terreno quer lotear seu imóvel. Para isto ele quer avaliar o melhor
//tamanho de cada lote sabendo que todos os lotes devem ter 20 metros de largura. As
//dimensões do terreno são 800 metros de frente por 20 metros de largura. Elabore um
//programa que leia a quantidade de lotes desejada e mostre o tamanho da frente de
//cada lote.
