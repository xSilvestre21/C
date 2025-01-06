#include<stdio.h>
#include <stdlib.h>
struct reg{
	int ra;
	float n1, n2, media;

};
int main(void){
	struct reg *aluno1, *aluno2;
	if(!(aluno1 = malloc(sizeof(struct reg)))){
		printf("Faltou memoria! \n");
		exit(1);
	}
	if(!(aluno2 = malloc(sizeof(struct reg)))){
		printf("Faltou memoria! \n");
		exit(1);
	}

	printf("Digite R.A do primeiro: ");
	scanf("%d", &aluno1->ra);
	printf("Digite nota 1 do primeiro: ");
	scanf("%f", &aluno1->n1);
	printf("Digite nota 2 do primeiro: ");
	scanf("%f", &aluno1->n2);
	aluno1->media = (aluno1->n1 + aluno1->n2)/2.0;
	printf("Media do primeiro aluno: %.2f\n", aluno1->media);
	printf("Digite RA do segundo: ");
	scanf("%d", &aluno2->ra);
	printf("Digite nota 1 do segundo: ");
	scanf("%f", &aluno2->n1);
	printf("Digite nota 2 do segundo: ");
	scanf("%f", &aluno2->n2);
	aluno2->media = (aluno2->n1 + aluno2->n2)/2.0;
	printf("Media do segundo aluno: %.2f\n", aluno2->media);
	
	if(aluno1->media >= aluno2->media){
		printf("Maior media = %.2f (Aluno 1)", aluno1->media);
	} else if(aluno2->media >= aluno1->media){
		printf("Maior media = %.2f (Aluno 2)", aluno2->media);
	}
	free(aluno1);
	free(aluno2);
	free(media);
	
	
	return 0;
}
