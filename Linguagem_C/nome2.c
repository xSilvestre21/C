#include <stdio.h>
int main(void){
	char nome[50];
	char letra;
	printf("Digite um nome: ");
	scanf(" %s", nome);
	printf("Resultado: %s \n", nome);
	printf("Digite uma letra: ");
	scanf(" %c", &letra);
	printf("Resultado: %c\n", letra);
	printf("Resultado: %d\n", letra);

	return 0;
}
