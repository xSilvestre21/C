#include <stdio.h>
int main(void){
	int pos, soma = 0;
	for(pos = 0; pos <= 1378; pos++){
		soma = soma + pos;
	}
	printf("%d", soma);
}
