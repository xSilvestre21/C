#include<stdio.h>

int main(void){
	int num=1, soma=0, quantidade=0;
	while(num!=0){
		printf("digite o numero: ");
		scanf("%d", &num);
		quantidade=quantidade+1;
		soma=soma+num;
	}
	
printf("Soma= %d e quantidade=%d e media=%d\n", soma, quantidade-1, soma/(quantidade-1));
	
	return 0;
}

//Carrega infinitos números até digitar zero,
//mostra quantos números você digitou e sua soma.
