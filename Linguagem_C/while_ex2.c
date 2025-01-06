#include<stdio.h>

int main(void){
	int OPC=0;
	while(OPC!=3){
		printf("Menu: \n");
		printf("1: incluir cliente \n");
		printf("2: consultar cliente \n");
		printf("3: finalizar \n");
		printf("=====> ");
		scanf("%d", &OPC);
		if(OPC==1){
			printf("Foi selecionado 1\n");
		}
		else if(OPC==2){
			printf("Foi selecionado 2\n");			
		}
		else if(OPC=3){
			printf("Foi digitado 3\n");
		}
		else{
			printf("Opcao desconhecida!\n");
		}
	}
	
	return 0;
	
}

//Possibilita 3 opções, caso escolha a 1 ou 2, o prgrama continua
//caso digite 3 acaba.
