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

//Elabore um programa em C com uma fun��o para carregar um vetor de 10 inteiros e outra
//fun��o que recebe um n�mero digitado pelo como par�metro. Se a fun��o de busca encontrar
//o n�mero do par�metro dentro do vetor, ela deve devolver a posi��o do vetor onde est� o
//n�mero procurado. Se n�o encontrar ent�o devolve -1.
