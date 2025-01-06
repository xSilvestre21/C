#include<stdio.h>
int main(void){
	float comp, larg;
	printf("Digite o valor do comprimento em cm: ");
	scanf("%f", &comp);
	printf("Digite o valor da largura em cm: ");
	scanf("%f", &larg);
	printf("Area= ""%.1f\n", comp*larg);
	printf("Quantidade de fotos possiveis=");
	printf("%.1f\n", comp*larg/(80*50));
	
	return 0;
	
}

//Crie um programa para ajudar um arquiteto que quer cobrir as paredes de uma casa
//com fotos de 50cm x 80cm. O programa deve pedir ao usuário a largura e o
//comprimento da parede. Ignore portas e janelas para simplificar as contas.
