#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {
	int tamanho = 50000;
	int vet[tamanho], aux, inte, exte;
	clock_t tempoInic, tempoFim, tempoDecorrido;
	
	for(inte = 0; inte < tamanho; inte++) {
		vet[inte] = rand();		
	}
	
	// Inicia o relógio
	tempoInic = clock();
	for(exte = 0; exte < tamanho - 1; exte++) {
		for(inte = exte + 1; inte < tamanho; inte ++) {
			if(vet[exte] > vet[inte]) {
				aux = vet[exte];
				vet[exte] = vet[inte];
				vet[inte] = aux;
			}
		}
	}
	// Consulta o reçógio e mostra o tempo decorrido
	tempoFim = clock();
	tempoDecorrido = tempoFim - tempoInic;
	printf("Durac = %f ms\n", (double)tempoDecorrido / (CLOCKS_PER_SEC / 1000));
}

// Escreva um programa para mostrar o tempo necessário para o algoritmo Selection Sort
// ordenar um vetor de 50 mil inteiros carregado com a função rand() da stdlib.h
