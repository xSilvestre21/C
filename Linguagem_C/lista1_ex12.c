#include<stdio.h>
int main(void){
	int vet[200], pos, qtd=0;
	for(pos=0; pos<200; pos++){
		printf("Digite o %d numero:", pos+1);
		scanf("%d", &vet[pos]);
		if(vet[pos]>20 && vet[pos>30]){
			qtd++;
		}
	}
	printf("Quantidade de numeros fora do intervalo= %d", qtd);
	
	return 0;
}

//Crie um programa em C para ler 200 n�meros do teclado. Ao final da leitura seu
//programa deve informar quantos n�meros n�o estavam no intervalo entre 20 e 30,
//incluindo os extremos, ou seja, os n�meros 20 e 30 est�o dentro deste intervalo.
