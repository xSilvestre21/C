#include <stdio.h>
int fat(int parm);
int main(void){
	int num, res;
	printf("Digite um numero menor que 30: ");
	scanf("%d", &num);
	if(num >= 30){
		return 1;
	}
	res = fat(num);
	printf("Fatorial = %d\n", res);
	return 0;
}

int fat(int parm){
	if(parm<=2){
		return parm;
	}
	else{
		return(parm * fat(parm-1));
	}
}

//Escreva um programa que pe�a um numero inteiro menor que 30
//para o usu�rio e mostre o fatorial deste n�mero.
