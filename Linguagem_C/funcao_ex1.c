#include<stdio.h>
float divide(float parmA, float parmB); //Protótipo ou assinatura da função
int main(void){
	int numA=3, numB=2;
	float res;
	res= divide(numA, numB); //numA e numB são parâmetros reais
	printf("Resultado= %.1f\n", res);
	printf("Outra forma de usar a funcao divide()\n");
	printf("Resultado= %.1f\n", divide(numA, numB));
	return 0;
}
float divide(float parmA, float parmB){ //parmA e parmB são parâmetros formais
	float ret;
	ret= parmA/parmB;
	return ret;
}

//Divide 3 por 2.
