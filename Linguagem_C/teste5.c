#include <stdio.h>
int main(void) {
	int pos, soma = 0, x = 0;
	for (pos = 0; pos <= 100; pos++){
		soma = x + pos;
		printf("%d + %d = %d\n", x, pos, soma);
	}
	

	return 0;
}
