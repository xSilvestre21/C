#include<stdio.h>
int main(void){
	int num, qtd=0, vet[1000], pos, poss;
	printf("Digite um numero: ");
	scanf("%d", &num);
	while(num>=2){
		vet[pos] = num%2;
		pos++;
		printf("Resto= %d\n", num%2);
		num = num/2;
	
	}
	printf("%d", 1);
	for(poss=pos-1; poss>=0; poss--){
		printf("%d", vet[poss]);
	}
	return 0;
}

//Altere o programa anterior para armazenar os restos em um vetor de inteiros
//de 1000 posições. Ao final do processo mostre apenas as posições efetivamente
//usadas nesse vetor. (Transformação de base decimal para binário)
