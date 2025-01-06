#include<stdio.h>
int main(void){
	int num;
	while(num>=0){
		printf("Digite um numero: ");
		scanf("%d", &num);
	}
	return 0;
}

//Escreve infinitos números maiores ou iguais a zero.
//Caso digite algum negativo, o programa é encerrado.
