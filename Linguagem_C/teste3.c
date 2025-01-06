#include<stdio.h>
int main(void){
	char nome[100];
	printf("Qual seu nome?");
	scanf("%s", nome);
	printf("Ola, %s", nome);
	return 0;
}
