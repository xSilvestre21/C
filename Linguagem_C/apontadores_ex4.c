#include <stdio.h>
int main (void){
	int *apt, vet[5], pos;
	for(pos = 0; pos < 5 ; pos++){
		printf("Digite o %d numero: ", pos+1);
		apt = &vet[pos];
		scanf("%d", apt);
	}
	
	/*for(pos = 0; pos < 5 ; pos++){
		printf("%d ", vet[pos]);
	}*/
	return 0;
}

/* Elabore um programa em C que leia um vetor de 5
inteiros usando um apontador */
