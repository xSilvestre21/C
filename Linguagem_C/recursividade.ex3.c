#include <stdio.h>
int fibo(int parm);
int main(void){
	int pos, res;
	printf("Digite a posicao: ");
	scanf("%d", &pos);
	res = fibo(pos);
	printf("Fibonacci de %d = %d\n", pos, res);
	return 0;
}

int fibo(int parm){
	if(parm < 3){
		return 1;
	}
	return (fibo(parm - 1) + fibo(parm - 2));
}

//Elabore um programa que mostre o número da sequência de fibonacci
//para uma posição pelo usuário.
