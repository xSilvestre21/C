#include<stdio.h>

void mostra(int parm[], int tam);
int main(void){
	int vet[5], pos;
	for(pos=0; pos<5; pos++){
		printf("Digite o %d valor: ", pos+1);
		scanf("%d", &vet[pos]);
	}
	mostra(vet,5);
	
	return 0;
}

void mostra(int vet[], int tamanho){
	int pos;
	for(pos=0; pos < tamanho; pos++){
		printf("Posic: %d: %d\n", pos+1, vet[pos]);
	}
}

//Escreva um programa em C que leia um vetor de 5 inteiros e mostre
//o conteúdo deste vetor com uma função
