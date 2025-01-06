#include<stdio.h>

int main(void)
{
	int numUm;
	int numDois;
	int numTres;
	printf("Digite o primeiro numero: ");
	scanf("%i", &numUm);
	printf("Digite o segundo numero: ");
	scanf("%i", &numDois);
	printf("Digite o terceiro numero: ");
	scanf("%i", &numTres);
	if(numUm <= numDois && numDois <= numTres){
		printf("%i, %i, %i\n", numUm, numDois, numTres);
	}
	if(numUm <= numTres && numTres <= numDois){
		printf("%i, %i, %i\n", numUm, numTres, numDois);
	}
	if(numDois <= numTres && numTres <= numUm){
		printf("%i, %i, %i\n", numDois, numTres, numUm);
	}
	if(numDois <= numUm && numUm <= numTres){
		printf("%i, %i, %i\n", numDois, numUm, numTres);
	}
	if(numTres <= numDois && numDois<= numUm){
		printf("%i, %i, %i\n", numTres, numDois, numUm);
	}
	if(numTres <= numUm && numUm <= numDois){
		printf("%i, %i, %i\n", numTres, numUm, numDois);
	};
	
	return 0;
}

//Coloca os números em ordem crescente.
