#include <stdio.h>
int main(void){
	int *qtd, num[5], pos;
	for(pos = 0; pos < 5 ; pos++){
		printf("Digite o %d numero: ", pos+1);
		scanf("%d", &num[pos]);	
	}

	for(pos = 0; pos < 5 ; pos++ ){
		qtd = &num[pos];
		printf("%d  ", *qtd);
	}
	return 0;
}

/* Elabore um programa que leia um vetor de 5 inteiros do
teclado e depois o imprima com a ajuda de um apontador para percorrer todas
as suas posições. */
