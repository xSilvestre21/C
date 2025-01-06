#include<stdio.h>
int main(void){
	float num[20], ma, me;
	int pos=0;
	for(pos=0; pos<20; pos++){
		printf("Digite o numero %d: ", pos+1);
		scanf("%f", &num[pos]);		
	}
	for(pos=0; pos<20; pos++){
		if(pos==0){
			ma=num[pos];
			me=num[pos];		
		}else{
			if(num[pos]>ma){
				ma=num[pos];
			}
			if(num[pos]<me){
				me=num[pos];
			}
		}	
	}
	printf("\nMaior nota= %.1f e Menor nota= %.1f", ma, me);
	
	return 0;
}

//Crie um programa em C que leia as notas das provas de 20 alunos e as armazene em
//um vetor. Ao final da leitura, imprima na tela qual foi a maior e a menor nota desta
//sala.
