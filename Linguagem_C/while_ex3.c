#include<stdio.h>
int main(void){
	float nota[10], soma=0, media;
	int pos=0;
	while(pos<10){
		printf("Digite a %d nota: ", pos+1);
		scanf("%f", &nota[pos]);
		soma= soma+nota[pos];
		pos++;
	}
	media=soma/10.0;
	printf("Media= %.2f\n", media);
	pos=0;
	while(pos<10){
		if(nota[pos]>media){
			printf("Nota[%d]: %.2f -> Maior que %.2f\n", pos+1, nota[pos], media);
		}
		if(nota[pos]<media){
			printf("Nota[%d]: %.2f -> Menor que %.2f\n", pos+1, nota[pos], media);
		}
		pos=pos+1;
	}

	return 0;
}

//Carrega a nota de 10 alunos, calcula a média da classe e fala quais notas
//são maiores ou menores que a média.
