#include<stdio.h>
int main(void){
	long pos;
	float soma=0;
	for(pos=0; pos<50000000; pos++){
		soma= soma+(pos/15.0);
		if(pos % 100000 == 0){
			printf("%d\n", pos);
		}
	}
	return 0;
}

//Carrega n�meros at� 50.000.000 e quais s�o divisiveis por 100.000
//ps.: pos/15 foi uma tentativa de deixar mais lento.
