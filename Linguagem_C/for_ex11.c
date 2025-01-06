#include<stdio.h>
int main(void){
	int num, pos, multi=1;
	printf("Digite um numero menor que 12: ");
	scanf("%d", &num);
	if(num>12){
		return 1;
	}
	for(pos=1; pos<=num; pos=pos+1){
		multi=multi*pos;
	}
	printf("Resultado= %d", multi);
	
	return 0;
}

