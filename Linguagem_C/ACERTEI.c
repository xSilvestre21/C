
#include<stdio.h>

int main(void)
{
	int numUm;
	int numDois;
	printf("Digite o primeiro numero: ");
	scanf("%i",&numUm);
	printf("Digite o segundo numero: ");
	scanf("%i",&numDois);
	if(numUm < numDois){
		printf("Produto: %d\n", numUm * numDois);
	}else{
		printf("Soma: %d\n", numUm + numDois);
	};
	
	
	return 0;
}

//Se o primeiro numero for maior que o segundo soma, senão, multiplica.

