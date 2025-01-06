#include<stdio.h>
void lerNum(int * parmRef);
int main(void){
	int num, pos;
	printf("Digite um numero: ");
	scanf("%d", &num);
	for(pos=num; pos>=1; pos--){
	lerNum(&num);
	}
	return 0;
}
void lerNum(int *parmRef){
	*parmRef = *parmRef -1;
	printf("Numero: %d\n", *parmRef);
}

//Escreva um programa em C para mostrar a contagem regressiva a partir de um número digitado 
//pelo usuário sendo que o valor da contagem atual deve ser mostrado por uma função que recebe esse valor 
//como parâmetro e esta função é quem reduz uma unidade do valor em cada chamada.
