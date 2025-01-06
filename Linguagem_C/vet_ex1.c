#include<stdio.h>

int main(void){
	int vet[2], pos= 0;
	printf("Digite o %d numero: ", pos +1);
	scanf("%d", &vet[pos]);
	pos++;
	printf("Digite o %d numero: ", pos +1);
	scanf("%d", &vet[pos]);
	if(vet[0] <= vet[1]){
		printf("%d e %d\n", vet[0], vet[1]);
	}else{
		printf("%d e %d\n", vet[1], vet[0]);
	}
	
	
	return 0;
}

//Coloca dois números em orde crescente.
