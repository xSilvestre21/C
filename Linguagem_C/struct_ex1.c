#include<stdio.h>
struct reg{
	int ra;
	float n1, n2, media;
};
int main(void){
	struct reg aluno1, aluno2;
	printf("Digite R.A do primeiro: ");
	scanf("%d", &aluno1.ra);
	printf("Digite nota 1 do primeiro: ");
	scanf("%f", &aluno1.n1);
	printf("Digite nota 2 do primeiro: ");
	scanf("%f", &aluno1.n2);
	aluno1.media = (aluno1.n1 + aluno1.n2)/2.0;
	printf("Digite RA do segundo: ");
	scanf("%d", &aluno2.ra);
	printf("Digite nota 1 do segundo: ");
	scanf("%f", &aluno2.n1);
	printf("Digite nota 2 do segundo: ");
	scanf("%f", &aluno2.n2);
	aluno2.media = (aluno2.n1 + aluno2.n2)/2.0;
	if(aluno1.media >= aluno2.media){
		printf("Maior: RA [%d], media [%.1f], nota 1 [%.1f] e nota 2 [%.1f]\n", aluno1.ra, aluno1.media, aluno1.n1, aluno1.n2);
	}else{
		printf("Maior: RA [%d], media [%.1f], nota 1 [%.1f] e nota 2 [%.1f]\n", aluno2.ra, aluno2.media, aluno2.n1, aluno2.n2);
	}
	
	return 0;
}

//Lê as notas de dois alunos e mostra aquele que tem a maior média.
