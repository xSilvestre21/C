#include<stdio.h>
void lerNum(int parmVal, int * parmRef);
int main(void){
	int numA = 3, numB = 5;
	lerNum(numA, &numB);
	printf("Num A: %d NumB: %d\n", numA, numB);
	lerNum(numA, &numB);
	printf("Num A: %d NumB: %d\n", numA, numB);
	return 0;
}
void lerNum(int parmVal, int *parmRef){
	parmVal = 6;
	*parmRef = *parmRef + 1;
	printf("ParmV: %d e ParmRef: %d\n", parmVal, *parmRef);
}

//função valor e referência exemplo.
