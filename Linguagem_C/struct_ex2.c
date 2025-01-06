#include<stdio.h>
struct reg{
	float *n1, *n2, media;
};
int main(void){
	struct reg aluno;
	int pos;
	for(pos=0; pos<2; pos++){
		printf("Digite o RA do %d aluno: ", pos+1);
		scanf("%d", &aluno[pos].ra);
		printf("Digite a nota 1 do %d aluno: ", pos+1);
		scanf("%f", &aluno[pos].n1);
		printf("Digite a nota 2 do %d aluno: ", pos+1);
		scanf("%f", &aluno[pos].n2);
		aluno[pos].media= (aluno[pos].n1 + aluno[pos].n2)/2.0;
	}
	for(pos=0; pos<10; pos++){
		if(aluno[pos].media >= 6){
		   printf("RA [%d], nota 1[%.1f], nota 2 [%.1f], media [%.1f]\n", aluno[pos].ra, aluno[pos].n1, aluno[pos].n2, aluno[pos].media);
		}
	}
	
	return 0;
}

//Escreva um programa em C com um vetor de estrutura reg com 10 posição. Mostre os dados dos alunos que foram aprovados,
//ou seja, ficaram com uma média maior ou igual a seis. 




