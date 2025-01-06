#include<stdio.h>
int main(void){
	float num, soma=0;
	for(num=100; num>=5; num=num-1){
		soma= soma + num/(num-1.0);
	}
	printf("Soma= %.1f", soma);
	
	return 0;	
}

//Crie um programa em C para apresentar o resultado da seguinte serie numerica:
//S= 100/99 + 99/98 + 98/97 + 97/96 + ... + 5/4.
