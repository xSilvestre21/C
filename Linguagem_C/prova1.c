#include<stdio.h>
int main(void){
	int num1;
	int km;
	int vip;
	printf("Digite 0 para corrida normal ou 1 para vip: ");
	scanf("%d", &num1);
	if(num1==0){
		printf("Digite a quilometragem: ");
		scanf("%d", &km);
		printf("Valor= R$");
		printf("%d\n", 2*km+20);
	}else if(num1==1){
		printf("Digite a quilometragem: ");
		scanf("%d", &vip);
		printf("Valor= R$");
		printf("%d\n", 3*vip+10);
	}else if(num1!=0 && 1){
		printf("Comando desconhecido");
	}
	
	return 0;
}

//Um programa de taxi que calcula diferentes equações para caso a corrida seja vip ou normal
//utilizando a quilometragem.
