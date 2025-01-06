#include<stdio.h>
int main(void){
	int num, qtd=0;
	printf("Digite um numero: ");
	scanf("%d", &num);
	while(num>=2){
		printf("Resto= %d\n", num%2);
		num = num/2;
		qtd = qtd+1;
	}
	printf("%d", qtd);
	return 0;
}
