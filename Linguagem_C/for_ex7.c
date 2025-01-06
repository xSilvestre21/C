#include<stdio.h>
int main(void){
	float soma=0;
	int parcela;
	for(parcela=3; parcela<=1832; parcela++){
		soma= soma+(parcela/(parcela+1.0));
	}
	printf("%.2f", soma);
	
	return 0;
}

//Soma de 3/4 até 1832/1833;
