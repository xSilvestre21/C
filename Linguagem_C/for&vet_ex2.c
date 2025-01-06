#include<stdio.h>

int main(void){
	float vet[6], soma=0;
	int pos;
	for(pos=0; pos<6; pos=pos+1){
		printf("Digite o valor: ");
		scanf("%f", &vet[pos]);
		soma=soma+ vet[pos]/6;
	}
	printf("media=%.1f\n", soma);
	for(pos=0; pos<6; pos=pos+1){
		if(vet[pos]>soma){
			printf("%.1f\n", vet[pos]);
		}
	}

	return 0;
}

//Digita 6 numeros, calcula a media e mostra quais numeros estao acima dela.
