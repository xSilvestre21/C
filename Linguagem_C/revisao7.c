#include<stdio.h>
int main(void) {
	int vet[10], pos;
	for(pos = 0; pos <10; pos++) {
		do{
			printf("Digite o %d numero: ", pos+1);
			scanf("%d", &vet[pos]);
		} while(vet[pos] % 2 != 0);
	}
	
	for(pos = 0; pos < 10; pos++) {
		printf("Posic[%d]: %d\n", pos+1, vet[pos]);
	}
	
	return 0;
}

// Elabore um programa para ler 10 numeros imteros pares
