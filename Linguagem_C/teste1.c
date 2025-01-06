#include<stdio.h>
int main(void){
	char nome[50];
	printf("Teste %d %s\n", 10, "reais");
	printf("Teste %d %c\n", 100, 'a');
	printf("Digite um nome: ");
	scanf("%s", &nome);
	printf("%s", nome);
	 
	return 0;
}
