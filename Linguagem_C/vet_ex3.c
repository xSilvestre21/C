#include<stdio.h>

int main(void){
	int vet[3], pos = 0;
	printf("Digite o %d numero A: ", pos+1);
	scanf("%d", &vet[pos]);
	pos++;
	printf("Digite o %d numero A: ", pos+1);
	scanf("%d", &vet[pos]);
	pos++;
	printf("Digite o %d numero A: ", pos+1);
	scanf("%d", &vet[pos]);
	int vat[3], poss=0;
	printf("Digite o %d numero B: ", poss+1);
	scanf("%d", &vat[poss]);
	poss++;
	printf("Digite o %d numero B: ", poss+1);
	scanf("%d", &vat[poss]);
	poss++;
	printf("Digite o %d numero B: ", poss+1);
	scanf("%d", &vat[poss]);
	printf("%d\n", vet[0] + vat[0]);
	printf("%d\n", vet[1] + vat[1]);
	printf("%d\n", vet[2] + vat[2]);
	
	return 0;
	
}

//Soma de dois vetores de 3 inteiros,
//como se fosse a soma de duas matrizes do tipo linha.
