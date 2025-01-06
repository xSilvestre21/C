#include<stdio.h>

int main(void)
{
	int numUm;
	printf("Digite um numero: ");
	scanf("%i", &numUm);
	if(numUm % 2 ==0){
		printf("Seu numero e par");
	}
	else{
		printf("Seu numero e impar");
	}
	
	
	return 0;
	
}

//Fala se o número é par ou impar.
