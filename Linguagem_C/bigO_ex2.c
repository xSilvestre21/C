#include<stdio.h>
int main(void) {
	int pos, vet[200000], soma = 0;
	for(pos= 0; pos < 200000; pos++) {
		vet[pos] = rand();
	}
	
	for(pos = 0; pos < 200000; pos++) {
		soma = soma + vet[pos];
	}
	
	printf("Soma = %d\n", soma);
	return 0;
}
