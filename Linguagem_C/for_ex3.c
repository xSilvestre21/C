#include<stdio.h>

int main(void){
	int s=0, pos;
	int x;
	printf("Digite o numero: ");
	scanf("%d", &x);
	for(pos=3; pos<=x; pos=pos+1){
		s=s+pos;
	}
	printf("Soma=%d\n", s);
	
	return 0;
}

//Soma de 3 até o número que você digitar.
