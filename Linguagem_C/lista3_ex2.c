#include<stdio.h>
int main(void){
	int num[20], pos=0, soma=0;
	for(pos=0; pos<20; pos++){
		printf("Digite o numero %d: ", pos+1);
		scanf("%d", &num[pos]);
	}
	for(pos=0; pos<20; pos++){
		if(num[pos]%2!=0){
			soma= soma+ num[pos];
		}	
	}
	printf("\nSoma dos impares= %d", soma);
	
	
	return 0;
}

//Apresente um programa em C para ler 20 números inteiros do teclado e depois
//mostre a soma dos números ímpares.
