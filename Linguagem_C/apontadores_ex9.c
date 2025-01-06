#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *ap1, *ap2, *ap3;
	printf("Digite o primeiro numero: ");
	scanf("%d", &ap1);
	printf("Digite o segundo numero: ");
	scanf("%d", &ap2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &ap3);
	
	if(ap1 < ap2 && ap2 < ap3){
		printf("%d  %d  %d", ap1, ap2, ap3);
	}
	if(ap1 < ap3 && ap3 < ap2){
		printf("%d  %d  %d", ap1, ap3, ap2);
	}
	
	
	if(ap2 < ap1 && ap1 < ap3){
		printf("%d  %d  %d", ap2, ap1, ap3);
	}
	if(ap2 < ap3 && ap3 < ap1){
		printf("%d  %d  %d", ap2, ap3, ap1);
	}
	
	
	if(ap3 < ap2 && ap2 < ap1){
		printf("%d  %d  %d", ap3, ap2, ap1);
	}
	if(ap3 < ap1 && ap1 < ap2){
		printf("%d  %d  %d", ap3, ap1, ap2);
	}
	
	return 0;
}
