#include<stdio.h>

int main(void){
	int vet[3], pos=0;
	printf("Digite o %d numero: ", pos+1);
	scanf("%d", &vet[pos]);
	pos++;
	printf("Digite o %d numero: ", pos+1);
	scanf("%d", &vet[pos]);
	pos++;
	printf("Digite o %d numero: ", pos+1);
	scanf("%d", &vet[pos]);
	if(vet[0]%2 == 0){
		printf("\npar");
	}else{
		printf("\nimpar");
	}
	if(vet[1]%2 == 0){
		printf("\npar");
	}else{
		printf("\nimpar");
	}
	if(vet[2]%2 == 0){
		printf("\npar");
	}else{
		printf("\nimpar");
	}
		
	return 0;
}

//Fala se três números são pares ou impares.
