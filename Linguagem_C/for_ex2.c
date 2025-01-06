#include<stdio.h>

int main(void){
	int s=0, pos;
	for (pos= 3; pos <=52; pos = pos +1){
		s= s+pos;
	}
	printf("Soma=%d\n", s);
	
	return 0;
}

//Soma numeros inteiros de 3 a 52.
