#include<stdio.h>
int main(void){
	float comp, larg;
	printf("Digite o comprimento da parede: ");
	scanf("%f", &comp);
	printf("Digite a largura da parede: ");
	scanf("%f", &larg);
	printf("Area da parede= ""%.0f\n", comp*larg);
	printf("Tijolo= 15cm x 30cm \n");
	printf("Tijolos necessarios= ""%.2f", comp*larg/(15*30));
	
	
	return 0;
}

//Formule um programa para calcular quantos tijolos de 15cm x 30cm são necessários
//para criar uma parede de 2 metros x 4 metros.
