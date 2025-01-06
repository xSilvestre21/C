#include <stdio.h>
int fat(int parm);
int main(void){
	int num, res;
	num = 5; 
	res = fat(num);
	printf("Fat = %d\n", res);
	return 0;
}

int fat(int parm){
	if(parm<=2){
		return parm;
	}
	else{
		return(parm * fat(parm-1));
	}
}

//Faz fatorial do numero
