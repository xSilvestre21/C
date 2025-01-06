#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {
	int tamanho = 50000;
	int vet[tamanho], troca;
	register int pos, aux;
	clock_t tempoInic, tempoFim, tempoDecorrido;
	
	for(pos = 0; pos < tamanho; pos++) {
		vet[pos] = rand();		
	}
	
	// Inicia o relógio
	tempoInic = clock();
	troca = 1;
	while(troca == 1) {
		troca = 0;
		for(pos = 0; pos < tamanho; pos ++) {
			if(vet[pos] > vet[pos + 1]) {
				aux = vet[pos];
				vet[pos] = vet[pos + 1];
				vet[pos + 1] = aux;
				troca = 1;
			}
		}
	}
	// Consulta o reçógio e mostra o tempo decorrido
	tempoFim = clock();
	tempoDecorrido = tempoFim - tempoInic;
	printf("Durac = %.2f s\n", (double)tempoDecorrido / (CLOCKS_PER_SEC));
}

// Escreva um programa em C para mostrar o tempo necessário para o algoritmo BUBBLE ordenar
// um vetor de 50 mil inteiros
