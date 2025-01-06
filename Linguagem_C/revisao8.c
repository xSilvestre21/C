#include<stdio.h> 
int main(void) {
	int vet[10], pos = 0;
	while(pos < 10) {
		printf("Digite o %d numero: ", pos+1);
		scanf("%d", &vet[pos]);
		if(vet[pos] % 2 != 0) {
			printf("Digite um par!\n");
		} else{
			pos++;
		}	
	}
	for(pos = 0; pos < 10; pos++) {
		printf("Posic[%d]: %d\n", pos+1, vet[pos]);
	}
	
	return 0;
}
