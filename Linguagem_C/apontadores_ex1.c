#include <stdio.h>
int main(void){
	 int *qtd, num;
	 printf("Digite um numero inteiro: ");
	 scanf("%d", &num);
	 qtd = &num;
	 printf("Foi digitado %d\n", *qtd);
	 return 0;
}

/* Elabore um programa que leia um valor inteiro do teclado
e depois atribua o endere�o desta vari�vel a um apontador. Ao final do
 processamento imprima o valor lido usando o apontador e n�o a vari�vel com a
fun��o printf().*/ 
