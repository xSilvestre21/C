#include<stdio.h>
int main(void){
	int vet[10], pos, repete=1, sentinela;
	printf("Digite o 1 numero: ");
	scanf("%d", &vet[0]);
	for(pos=1; pos<10; pos++){
		repete=1;
		while(repete==1){
			printf("Digite o %d numero: ", pos+1);
			scanf("%d", &vet[pos]);
			repete=0;
			for(sentinela = pos-1; sentinela >= 0; sentinela--){
				if(vet[pos]== vet[sentinela]){
					repete=1;
				}
			}
		}
	}
	printf("Conteudo do vetor: \n");
	for(pos=0; pos<10; pos++){
		printf("Valor %d: %d\n", pos+1, vet[pos]);
	}
	return 0;
}

//Lê um vetor de 10 posições e garante que todas sejam diferentes.
