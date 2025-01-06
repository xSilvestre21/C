#include<stdio.h>
float leitor(void);
int main(void){
	float num;
	num = leitor();
	printf("Valor = %.1f\n", num);
	return 0;
	}
float leitor(void){
	float numA=-1;
	while(0>numA || numA<10){
		printf("Digite algo entre 0 e 10: ");
		scanf("%f", &numA);
	}
	return numA;
}

//Se digitar algo fora do intervalo acaba 


