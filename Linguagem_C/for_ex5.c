#include<stdio.h>

int main(void){
	int pos;
	float s=0;
	for(pos=2; pos<=798; pos=pos+1){
		s=s+(pos/(pos+1.0));
	}
	printf("Soma=%f\n", s);
	
	return 0;
}

//Soma de 2/3 até 798/799.
