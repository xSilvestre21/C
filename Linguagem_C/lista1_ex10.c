#include<stdio.h>
int main(void){
	int lado1, lado2, lado3;
	printf("Digite o primeiro lado: ");
	scanf("%d", &lado1);
	printf("Digite o segundo lado: ");
	scanf("%d", &lado2);
	printf("Digite o terceiro lado: ");
	scanf("%d", &lado3);
	if(lado1==lado2 && lado2==lado3){
		printf("Triangulo Equilatero");
	} 
	if(lado1!=lado2 && lado1!=lado3){
		printf("Triangulo Escaleno");
	}
	if(lado1==lado2 && lado2!=lado3){
		printf("Triangulo Isoceles");
	}
	if(lado1==lado3 && lado3!=lado2){
		printf("Triangulo Isoceles");
	}
	if(lado2==lado3 && lado3!=lado1){
		printf("Triangulo Isoceles");
	}

	return 0;
}

//Escreva um programa em C que avalie se os tr�s valores inteiros digitados pelo
//usu�rio formam um tri�ngulo equil�tero (tr�s lados iguais), is�sceles (dois lados
//iguais e um diferente) ou escaleno (tr�s lados diferentes). Lembre-se que para tr�s
//valores formarem um tri�ngulo nenhuma soma de dois lados pode ser menor ou igual
//ao terceiro lado.
