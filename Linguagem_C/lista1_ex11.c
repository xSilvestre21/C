#include<stdio.h>
int main(void){
	int num, num2, soma=0;
	int pos=1;
	printf("Digite o %d numero: ", pos);
	scanf("%d", &num);
	printf("Digite o %d numero: ", pos+1);
	scanf("%d", &num2);
	for(pos=1; pos<=num2; pos=pos+1){
		soma=soma+num;
	}
	printf("Produto= %d", soma);
	return 0;
}

//Imagine que sua calculadora est� com a tecla de multiplica��o quebrada. Crie um
//programa em C para calcular o produto de dois n�meros (X * Y) usando somente o
//comando de adi��o. Por exemplo, para multiplicar 4 * 5 sem o comando de
//multiplica��o voc� deve somar o 5 transformado em 4 componentes, o que equivale a
//fazer 5 + 5 + 5 + 5.
