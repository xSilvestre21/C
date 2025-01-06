#include<stdio.h>
int main(void){
	int num[10], pos;
	for(pos = 0; pos < 10; pos++){
		printf("Digite o %d numero: ", pos+1);
		scanf("%d", &num[pos]);
	}
	for(pos = 0; pos < 10; pos++){
			if(num[pos] > num[pos-1]){
				printf("%d", num[pos]);
			}
		}
	
	return 0;
}
