#include<stdio.h>
int main(void){
	int vet[10], pos, sentinela;
	for(pos=0; pos<10; pos++){
		printf("Digite o %d numero: ", pos+1);
		scanf("%d", &vet[pos]);
		for(sentinela=pos; sentinela>=0; sentinela--){
			printf("%d ", vet[sentinela]);
		}
		printf("\n");
	}
	printf("Vetor inteiro:\n");
	for(pos=0; pos<10; pos++){
		printf("%d\n", vet[pos]);
	}
	
	return 0;
}

//A cada vez que um numero é digitado, é mostrado os das posições anteriores também.
