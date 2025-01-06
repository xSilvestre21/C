#include<stdio.h>
int PegaPar(int posic);
int main(void){
	int vet[10], pos;
	for(pos=0; pos<10; pos++){
		vet[pos]= PegaPar(pos+1);
	}
	printf("\nVetor= \n");
	for(pos=0; pos<10; pos++){
		printf("Valor %2d= %d\n", pos+1, vet[pos]);
	}
	return 0;
}
int PegaPar(int posic){
	int num;
	do{
		printf("Digite o %d valor: ", posic);
		scanf("%d", &num);
	}while((num%2) != 0);
	return num;
}

//Só pega número par

