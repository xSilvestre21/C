#include<stdio.h>
int main(void){
	int vet[15], pos, soma=0, qtd=0;
	float media;
	for(pos=0; pos<15; pos++){
		printf("Digite o %d numero: ", pos+1);
		scanf("%d", &vet[pos]);
		soma= soma+vet[pos];
		media=soma/15.0;
	}
	printf("Soma= %d e Media= %.2f\n", soma, media);
	printf("Numeros maiores que a media:\n");
	for(pos=0; pos<15; pos++){
		if(vet[pos]>media){
			printf("%d\n", vet[pos]);
		}
	}
	for(pos=0; pos<15; pos++){
		if(vet[pos]>media){
			qtd++;
		}
	}
	printf("Quantidade=%2d\n", qtd);
	
	return 0;
}

//Carrega 15 n�meros, mostra a soma e a m�dia deles.
//Tamb�m mostra quais e quantos n�meros s�o maiores que a m�dia.
