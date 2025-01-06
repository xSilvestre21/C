#include<stdio.h>

int main(void){
	int num;
	int qntd1=0, qntd2=0, qntdx=0;
	do{
		printf("Menu: \n");
		printf("Digite 1 para terminar e 2 para continuar \n");
		printf("====>");
		scanf("%d", &num);
		if(num==1){
			qntd1=qntd1+1;
			printf("Foi digitado 1\n");
		}else if(num==2){
			qntd2=qntd2+1;
			printf("Foi digitado 2\n");
		}else{
			qntdx=qntdx+1;
			printf("Foi digitado outro\n");
		}
	}while(num!=1);
	printf("1 Foi digitado %d vez\n", qntd1);
	printf("2 Foi digitado %d vezes\n", qntd2);
	printf("Outros foram digitados %d vezes\n", qntdx);
	
	return 0;
}

//Contador de quantas vezes você digitou 2 ou outros numeros, caso você digite 1 acaba.
