#include<stdio.h>
int main(void){
	long pos;
	for(pos=0; pos<50000000; pos++){
		if(pos % 10000 == 0){
			printf("%d\n", pos);
		}
	}
	return 0;
}

//Carrega n�meros at� 50.000.000 e mostra quais s�o divis�veis por 10.000.
