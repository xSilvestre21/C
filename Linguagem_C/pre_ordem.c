#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

struct tpNo {
	int valor;
	struct tpNo *aptE, *aptD;
};
struct tpARV {
	struct tpNo * raiz;
};

void passeio_pre_ordem(struct tpNo *parmRaiz);
void passeio_em_ordem(struct tpNo *parmRaiz);
//void passeio_pos_ordem(struct tpNo *parmRaiz);

int main(void) {
	struct tpARV ar;
	struct tpNo *novo, *aux;
	ar.raiz = NULL;
	novo = malloc(sizeof(struct tpNo));
	novo->aptE = NULL;
	novo->aptD = NULL;
	novo->valor = 5;
	ar.raiz = novo;
	
	novo = malloc(sizeof(struct tpNo));
	novo->aptE = NULL;
	novo->aptD = NULL;
	novo->valor = 3;
	ar.raiz->aptE = novo;
	
	novo = malloc(sizeof(struct tpNo));
	novo->aptE = NULL;
	novo->aptD = NULL;
	novo->valor = 7;
	ar.raiz->aptD = novo;
	
	aux = malloc(sizeof(struct tpNo));
	aux->aptE = NULL;
	aux->aptD = NULL;
	aux->valor = 6;
	novo->aptE = aux;
	
	aux = malloc(sizeof(struct tpNo));
	aux->aptE = NULL;
	aux->aptD = NULL;
	aux->valor = 8;
	novo->aptD = aux;
	passeio_pre_ordem(ar.raiz);
	printf("\n");
	passeio_em_ordem(ar.raiz);
	printf("\n");
	passeio_pos_ordem(ar.raiz);
	return 0;
}

void passeio_pre_ordem(struct tpNo *parmRaiz) {
	if(parmRaiz == NULL) {
		return;
	}
	printf("Valor = %d\n", parmRaiz->valor); // V
	passeio_pre_ordem(parmRaiz->aptE); // E
	passeio_pre_ordem(parmRaiz->aptD); // D
}

void passeio_em_ordem(struct tpNo *parmRaiz) {
	if(parmRaiz == NULL) {
		return;
	}
	passeio_em_ordem(parmRaiz->aptE); // E
	printf("Valor = %d\n", parmRaiz->valor); // V
	passeio_em_ordem(parmRaiz->aptD); // D
}

void passeio_pos_ordem(struct tpNo *parmRaiz) {
	if(parmRaiz == NULL) {
		return;
	}
	passeio_pos_ordem(parmRaiz->aptE); // E
	passeio_pos_ordem(parmRaiz->aptD); // D
	printf("Valor = %d\n", parmRaiz->valor); // V
}

