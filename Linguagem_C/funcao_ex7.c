#include<stdio.h>
void mostraVet(int parm[], int tam);
int main(void){
	int vet[5], pos;
	for(pos=0; pos<5; pos++){
	vet[pos]= pos+1;
	}
	mostraVet(vet, 5);
	return 0;
}
void mostraVet(int parm[], int tam){
	int pos;
	for(pos=0; pos<tam; pos++){
		printf("%d\n", parm[pos]);
	}
}

//Lê um vetor por meio de uma função.
