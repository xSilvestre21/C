#include<stdio.h>
int main(void){
	float num[50], soma=0, media;
	int pos=0, qntd;
	printf("Quantos numeros serao lidos: ");
	scanf("%d", &qntd);
	if(qntd>50){
		printf("Valor limite= 50");
		return 1;
	}
	for(pos=0; pos<qntd; pos++){
		printf("Digite o numero %d: ", pos+1);
		scanf("%f", &num[pos]);		
	}
	printf("\nVetor= \n");
	
	for(pos=0; pos<qntd; pos++){
		printf("%.1f\n", num[pos]);
	}
		

	
	return 0;
}

//Escreva um programa em C que leia valores do teclado e os armazene em um vetor.
//Máximo de 50 posições. O primeiro número digitado é a quantidade de valores que
//serão lidos. Após a leitura do último número todo o vetor deverá ser exibido em tela.
//Se o usuário pedir para digitar mais do que 50 valores informe que este é o valor
//limite e finalize o programa.
