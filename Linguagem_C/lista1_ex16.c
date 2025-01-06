#include<stdio.h>
int main(void){
	int RA[8], num, pos=1;
	for(pos=0; pos<9; pos++){
	printf("Digite o numero %d do seu RA: ", pos+1);
	scanf("%d", &RA[pos]);
	}
	printf("RA= %d%d%d%d%d%d%d%d%d\n", RA[0], RA[1], RA[2], RA[3], RA[4], RA[5], RA[6], RA[7], RA[8]);
	printf("RA invertido= %d%d%d%d%d%d%d%d%d", RA[8], RA[7], RA[6], RA[5], RA[4], RA[3], RA[2], RA[1], RA[0]);
	
	return 0;
	
}

//Elabore um programa em C para ler o seu RA, um dígito de cada vez, e em seguida
//imprimir estes dígitos em ordem inversa. Por exemplo, se o seu RA for 01234, então o
//usuário vai digitar 0 e apertar a tecla <ENTER>, depois ele vai digitar 1 e a tecla
//<ENTER> e repetir este processo até o dígito 4 deste exemplo. Devem ser impressos
//no final os dígitos 43210.
