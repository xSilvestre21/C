#include <stdio.h>
#include <stdlib.h>
#define N 200000
int main(void) {
	int vet[N], pos;
	for(pos = 0; pos < N; pos++) {
		vet[pos] = rand();
	}
	
	for(pos = 0; pos < N; pos++) {
		printf("Valor = %d\n", vet[pos]);
	}
	return 0;
}
