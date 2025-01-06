#include<stdio.h>

int main(void){
	int pos;
	float s=0;
	for(pos=2; pos<=21; pos=pos+1){
		s=s+(1.0/pos);
	}
	printf("Soma=%f\n", s);
	
	return 0;
}

//Somar de 1/2 até 1/21.
