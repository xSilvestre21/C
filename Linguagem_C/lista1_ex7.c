#include<stdio.h>
int main(void){
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if(num>20){
		printf("Esta no intervalo apropriado");
	}else{
		printf("intervalo inapropriado");
	}
	
	return 0;
}

//Elabore um programa em C que imprima “Está no intervalo apropriado” caso o
//usuário tecle um número maior que 20.
