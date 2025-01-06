#include<stdio.h>
struct reg{
	int ra;
	float n1, n2, media;
};
void carregaVet(struct reg parm[], int tam);
void mostraVet(struct reg parm[], int tam);
int main(void){
	struct reg vet[10];
	carregaVet(vet, 10);
	mostraVet(vet, 10);
	return 0;
}
void mostraVet(struct reg parm[], int tam){
	int pos;
	for(pos=0; pos<tam; pos++){
		if(parm[pos].media >=6){
			printf("RA [%d], nota 1[%.1f], nota 2 [%.1f], media [%.1f]\n", parm[pos].ra, parm[pos].n1, parm[pos].n2, parm[pos].media);
		}
	}
}
void carregaVet(struct reg parm[], int tam){
	int pos;
	for(pos=0; pos<tam; pos++){
		printf("Digite o RA do %d aluno: ", pos+1);
		scanf("%d", &parm[pos].ra);
		printf("Digite a nota 1 do %d aluno: ", pos+1);
		scanf("%f", &parm[pos].n1);
		printf("Digite a nota 2 do %d aluno: ", pos+1);
		scanf("%f", &parm[pos].n2);
		parm[pos].media= (parm[pos].n1 + parm[pos].n2)/2.0;
	}
}

//Escreva um programa em C com um vetor de estrutura reg com 10 posição. Mostre os dados dos alunos que foram aprovados,
//ou seja, ficaram com uma média maior ou igual a seis.




