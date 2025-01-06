#include<stdio.h>
void carregaVet(int parm[], int tam);
int buscaVet(int parm[], int tam, int numero);
int main(void){
	int vet[10], num;
	carregaVet(vet, 10);
	while(1==1){
		printf("digite um numero: ");
		scanf("%d", &num);
		printf("%d\n", buscaVet(vet, 10, num));
	}

	return 0;
}
int buscaVet(int parm[], int tam, int numero){
	int pos;
	for(pos=0; pos<tam; pos++){
		if(numero == parm[pos]){
			return pos+1;
		}
	}
	return -1;
}
void carregaVet(int parm[], int tam){
	int pos;
	for(pos=0; pos<tam; pos++){
		printf("Digite o %d valor: ", pos+1);
		scanf("%d", &parm[pos]);
	}
}

//Elabore um programa em C com uma função para carregar um vetor de 10 inteiros e outra
//função que recebe um número digitado pelo como parãmetro. Se a função de busca encontrar
//o número do parâmetro dentro do vetor, ela deve devolver a posição do vetor onde está o
//número procurado. Se não encontrar então devolve -1.
