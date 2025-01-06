#include<stdio.h>
#include<stdlib.h>
struct tipoNo {
	int valor;
	struct tipoNo *prox;
};
void mostraLista (struct tipoNo *pHead);

int main(void) {
	int qtd = 1, pos = 0;
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

