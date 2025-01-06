#include<stdio.h>
int main(void) {
	int num;
	float num2;
	printf("Digite o numero inteiro: ");
	scanf("%d", &num);
	printf("Digite o fracionario: ");
	scanf("%f",&num2);
	if(num > num2) {
		printf("%d", num);
	} 
	if(num2 > num) {
		printf("%.2f", num2);
	}
	if(num == num2) {
		printf("Os dois numeros sao iguais");
	}
	
	return 0;
}

// Elabore um programa para ler dois números, um inteiro e outro fracionário. Informe qual dele é maior
