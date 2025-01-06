#include<stdio.h>
int main(void){
	int num[20], pos=0;
	for(pos=0; pos<20; pos++){
		printf("Digite o numero %d: ", pos+1);
		scanf("%d", &num[pos]);
	}
	printf("\nNumeros pares: \n");

	for(pos=0; pos<20; pos++){
		if(num[pos]%2==0){
			printf("%d\n", num[pos]);
		}	
	}
	
	
	return 0;
}
