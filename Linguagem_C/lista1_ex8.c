#include<stdio.h>
int main(void){
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if(1<=num && num<=7){
		printf("Esta no intervalo apropriado");
	}else{
		printf("intervalo inapropriado");
	}
	
	return 0;
}

//Crie um programa em C que imprima �Est� no intervalo apropriado� caso o usu�rio
//tecle um n�mero inteiro entre 1 e 7, incluindo os extremos.
