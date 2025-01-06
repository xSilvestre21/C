#include<stdio.h>

int main(void){
	int numUm;
	printf("Dgite o primeiro numero: ");
	scanf("%d", &numUm);
	if(numUm%2 == 0){
		printf("Tata feia");
	}else{
		printf("Tata linda");
	}
	
	return 0;
}
