#include<stdio.h>
void ler(int*parm);

int main(void){
	int valor;
	ler(&valor);
	printf("Valor = %d\n", valor);
	return 0;
}

void ler(int*parm){
	*parm = -1;
	while(*parm < 0){
		printf("Digite valor > 0: ");
		scanf("%d", &(*parm));
	}
}

//Elabore um programa em C com uma função do tipo void udada para ler um valor maior que
//zero. Mostre o valor lido no final da função principal, antes do "return 0;"
