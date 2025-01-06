#include <stdio.h>
int cnt(int parm);
int main(void){
	int pos, res;
	printf("Digite a posicao: ");
	scanf("%d", &pos);
	res = cnt(pos);

	return 0;
}

int cnt(int parm){
	if(parm < 0){
		return 1;
	}
	printf("%d\n", parm);
	return cnt(parm - 1);
}


//Crie um orograma com uma funçao recursiva para monstrar a contagem
//regressiva até zero a partir de um número digitado pelo usuário.
