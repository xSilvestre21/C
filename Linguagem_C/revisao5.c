#include<stdio.h>
int somaPar(int parmt, int parmf);
int main(void){
	printf("Resultado = %d\n", somaPar(2, 100));
	return 0;
}
int somaPar(int parmt, int parmf){
	if(parmt > parmf){
		return 0;
	}
	return parmt + somaPar(parmt + 2, parmf);
}

