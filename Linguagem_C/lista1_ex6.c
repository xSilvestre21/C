#include<stdio.h>
int main(void){
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if(num<10){
		printf("Esta no intervalo apropriado");
	}else{
		printf("intervalo inapropriado");
	}
	
	return 0;
}

//Elabore um programa em C que imprima �Est� no intervalo apropriado� caso o
//usu�rio tecle um n�mero menor que 10.
