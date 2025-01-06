#include<stdio.h>
int main(void){
	float num[20], soma=0, media;
	int pos=0;
	for(pos=0; pos<20; pos++){
		printf("Digite o numero %d: ", pos+1);
		scanf("%f", &num[pos]);		
		soma= soma + num[pos];	
	}
	media= soma/20.0;
	printf("Media= %.2f", media);
	

	
	return 0;
}

//Elabore um programa em C que leia as notas das provas de 20 alunos e as armazene
//em um vetor. Ao final da leitura, imprima a nota média desta turma.
