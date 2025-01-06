#include<stdio.h>
#include<stdlib.h>
struct tipoNo {
	int valor;
	struct tipoNo *prox;
};
void mostraLista (struct tipoNo *parm);
int somaLista (struct tipoNo *parm);
int contaLista (struct tipoNo *parm);
void mostraAcima (struct tipoNo *parm, float media);
void mostraValor (struct tipoNo *parm, int num);


int main(void) {
	int pos = 0, soma = 0, qtd = 0, num;
	float media;
	struct tipoNo *head = NULL, *novo;
	
	for(pos = 0; pos < 5; pos++) {
		printf("Digite o valor: ");
		scanf("%d", &qtd);
		if(!(novo = malloc (sizeof(struct tipoNo)))) {
			printf("Falha! \n");
			exit(1);
		}
		
		novo->prox = head;
		head = novo;
		novo->valor = qtd;
	}
	
	printf("\nMostra a lista: \n");
	mostraLista(head);
	
	
	soma = somaLista(head);
	printf("Soma = %d\n", soma);
	qtd = contaLista(head);
	printf("Qtd = %d\n", qtd);
	media = (float) soma/qtd;
	printf("Media = %.2f\n", media);
	mostraAcima(head, media);

	
	printf("\nConfirme se o numero esta na lista: ");
	scanf("%d", &num);
	mostraValor(head, num);
	
	printf("\nDestroi a lista \n");
	novo = head;
	while(novo != NULL) {
		head = head->prox;
		free(novo);
		novo = head;
	}
	printf("\nFIM! \n");
	return 0;
	
}

void mostraLista(struct tipoNo *pHead){
	struct tipoNo * max;
	max = pHead;
	while(max != NULL) {
		printf("Valor = %d\n", max->valor);
		max = max->prox;
	}
}

int somaLista(struct tipoNo *parm) {
	int soma = 0;
	struct tipoNo *aux;
	aux = parm;
	while(aux != NULL) {
		soma = soma + aux->valor;
		aux = aux->prox;
	}
	return soma;
}

int contaLista(struct tipoNo *parm) {
	int qtd = 0;
	struct tipoNo *aux;
	aux = parm;
	while(aux != NULL) {
		qtd = qtd + 1;
		aux = aux->prox;
	}
	return qtd;
}

void mostraAcima(struct tipoNo *parm, float media){
	struct tipoNo * aux;
	aux = parm;
	while(aux != NULL) {
		if(aux->valor > media) {
			printf("Valor acima = %d\n", aux->valor);
		}
		aux = aux->prox;
	}
}

void mostraValor(struct tipoNo *parm, int num){
	struct tipoNo * aux;
	aux = parm;
	while(aux != NULL) {
		if(aux->valor == num) {
			printf("Numero na lista = %d\n", aux->valor);
		}
		
		aux = aux->prox;
	}
}




