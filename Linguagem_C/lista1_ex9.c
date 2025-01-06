#include<stdio.h>
int main(void){
	int idade1;
	int idade2;
	printf("Digite a primeira idade: ");
	scanf("%d", &idade1);
	printf("Digite a segunda idade: ");
	scanf("%d", &idade2);
	if(idade1<=idade2){
		printf("%d anos e %d anos", idade1, idade2);
	}else{
		printf("%d anos e %d anos", idade2, idade1);
	}
	
	return 0;
}

//Elabore um programa em C que leia as idades de duas pessoas e as imprima na tela
//em ordem crescente.
