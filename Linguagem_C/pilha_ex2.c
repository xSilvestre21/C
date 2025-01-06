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
void ordenar(int pVet[], int tam);

int main(void) {
	struct tpNo *topo1 = NULL,*topo2 = NULL;
	int pos, vet[10];
	
	for(pos = 0; pos < 10; pos++) {
		push(&topo1, rand() % 101);
	}
	mostrarPilha(topo1);
	printf("\n............. \n \n");
	for(pos = 0; pos < 10; pos++) {
		vet[pos] = pop(&topo1);
	}
	ordenar(vet, 10);
	
	for(pos = 0; pos < 10; pos++) {
		push(&topo2, vet[pos]);
	}
	mostrarPilha(topo2);
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

void ordenar(int pVet[], int tam) {
	int inte, exte, aux;
	for(exte = 0; exte < tam - 1; exte ++) {
		for(inte = exte + 1; inte < tam; inte++) {
			if(pVet[exte] > pVet[inte]) {
				aux = pVet[exte];
				pVet[exte] = pVet[inte];
				pVet[inte] = aux;
			}
		}
	}
}



