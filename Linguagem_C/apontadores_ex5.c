#include <stdio.h>
int main (void){
	int *apt, vet[5], pos, min;
	for(pos = 0; pos < 5 ; pos++){
		printf("Digite o %d numero: ", pos+1);
		apt = &vet[pos];
		scanf("%d", apt);
	}
	
	for(pos = 0; pos < 5; pos++){
		if(min < vet[pos]){
			printf("%d", min);
		}
	}
	return 0;
}



/* Escreva um programa em C que leia um vetor de 5 inteiros
Usando um apontador, encontre e mostre o menor valor deste vetor */
