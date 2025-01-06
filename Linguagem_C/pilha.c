#include<stdio.h>
#include<stdlib.h>
struct tpNo {
	int valor;
	struct tpNo *prox;
};
void push(struct tpNo ** pTopo, int parm);
int pop(struct tpNo ** pTopo);
int consultarTopo(struct tpNo * pTopo);
void mostrarPilha(struct tpNo * pTopo);

int main(void) {
	struct tpNo * topo = NULL;
	int qtd, pos;
	qtd = rand() % 51;
	
	for(pos = 0; pos < qtd; pos++) {
		push(&topo, rand() % 101);
	}
	mostrarPilha(topo);
	
	while(topo != NULL) {
		printf("Topo = %d\n", pop(&topo));
	}
	return 0;
}

void mostrarPilha(struct tpNo * pTopo) {
	while(pTopo != NULL) {
		printf("Valor = %d\n", pTopo->valor);
		pTopo = pTopo->prox;
	}
}

int consultarTopo(struct tpNo *pTopo) {
	return pTopo->valor;
}

void push(struct tpNo ** pTopo, int parm) {
	struct tpNo * aux;
	if(!(aux = malloc(sizeof(struct tpNo)))) {
		printf("Faltou memoria! \n");
		exit(1);
	}
	aux->valor = parm;
	aux->prox = *pTopo;
	*pTopo = aux;
}

int pop(struct tpNo ** pTopo) {
	int num;
	struct tpNo * aux;
	if(*pTopo == NULL) {
		printf("Pilha vazia \n");
		exit(2);
	}
	aux = *pTopo;
	num = aux->valor;
	*pTopo = aux->prox;
	free(aux);
	return num;
}



