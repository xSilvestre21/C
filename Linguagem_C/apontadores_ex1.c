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
e depois atribua o endereço desta variável a um apontador. Ao final do
 processamento imprima o valor lido usando o apontador e não a variável com a
função printf().*/ 
