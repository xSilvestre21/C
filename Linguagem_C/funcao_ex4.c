#include<stdio.h>
float leitor(void);
int main(void){
	float vet[10];
	int pos;
	vet[pos]= leitor();
	return 0;
}

float leitor(void){
	float vat[10]; 
	int pos;
	for(pos=0; pos<10; pos++){
		printf("Digite o %d numero: ", pos+1);
		scanf("%f", &vat[pos]);
	}
	printf("\nVetor= \n");
	for(pos=0; pos<10; pos++){
		printf("%.1f\n", vat[pos]);
	}
	
	return vat[pos];
	
}

//Fução que lê um vetor com 10 posições


