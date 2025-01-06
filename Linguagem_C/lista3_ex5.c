#include<stdio.h>
int main(void){
	float num[20], soma=0, media;
	int pos=0;
	for(pos=0; pos<20; pos++){
		printf("Digite o numero %d: ", pos+1);
		scanf("%f", &num[pos]);		
		soma= soma + num[pos];	
	}
	media= soma/20.0;
	printf("Media= %.2f\n", media);
	printf("Numeros acima da media: \n");
	for(pos=0; pos<20; pos++){
		if(num[pos]>=media){
			printf("%.1f\n", num[pos]);
		}
	}
	
	return 0;
}

//Escreva um programa em C para ler um conjunto de valores do teclado e que informe
//quais destes valores estão acima da média deste vetor.
