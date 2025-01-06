#include<stdio.h>

int main(void){
	int pos;
	for (pos= 10; pos >= 0; pos = pos -1){
		if(pos%2 == 0){
			printf("%d\n", pos);
		}
	}
	
	return 0;
}

//Numeros pares de 0 a 10.
