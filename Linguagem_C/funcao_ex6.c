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

//Escreva um programa em C para mostrar a contagem regressiva a partir de um n�mero digitado 
//pelo usu�rio sendo que o valor da contagem atual deve ser mostrado por uma fun��o que recebe esse valor 
//como par�metro e esta fun��o � quem reduz uma unidade do valor em cada chamada.
