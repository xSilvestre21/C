#include <stdio.h>
int main(void){
	int pos, soma = 0;
	for (pos = 0; pos <= 200; pos++) {
		soma = soma + pos;
	} 
	printf("%d", soma);
	return 0;
}
