#include<stdio.h>
int main(void){
	int pos, soma=0;
	for(pos=2002; pos>=5; pos-- ){
		soma= soma+pos;
	}
	
	printf("Resultado da serie= %d", soma);
	
	return 0;
}

//Crie um programa em C para apresentar o resultado da seguinte serie numerica:
//S=2002+2001+2000+...+6+5.
