#include<stdio.h>
int main(void){
	int pos, soma=0;
	for(pos=98; pos>=4; pos-- ){
		soma= soma+(pos--);
	}
	
	printf("Resultado da serie= %d", soma);
	
	return 0;
}

//Crie um programa em C para apresentar o resultado da seguinte serie numerica:
//S=98+96+94+92+...+4.
