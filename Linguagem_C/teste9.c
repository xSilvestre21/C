#include <stdio.h>

int main(void) {
	int num, pos, acumulador = 0;
	printf("Digite um numero: ");
	scanf("%d", num);
	pos = num;
	for(pos = 12; pos <= 2; pos = pos-1) {
		acumulador = pos%2;
		printf("%d", acumulador);
	}
	return 0;
}
