#include <stdio.h>
int main(void){
	char teste = 'a';
	printf("Digite um caractere: ");
	scanf("%c", &teste); // teste = getchar()
	printf("Resultado: %c\n", teste);
	printf("Resultado: %d\n", teste); // mostra o código ASCII do caractere "a"
	return 0;
}
