#include<stdio.h>
void carregaVet(int parm[], int tam);
void mostraVet(int parm[], int tam);
int main(void){
	int vet[10];
	carregaVet(vet, 10);
	mostraVet(vet, 10);
	return 0;
}
void mostraVet(int parm[], int tam){
	int pos;
	printf("Vetor:\n");
	for(pos=0; pos<tam; pos++){
		printf("%d\n", parm[pos]);
	}
}
void carregaVet(int parm[], int tam){
	int pos;
	for(pos=0; pos<tam; pos++){
		printf("Digite o %d valor: ", pos+1);
		scanf("%d", &parm[pos]);
	}
}

//Carrega e mostra um vetor por meio de uma função.
