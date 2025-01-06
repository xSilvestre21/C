#include <stdio.h>
int main(){
	int salarioBruto, quantidadeAnos, numeroFilhos, salarioAumentado;
	float taxa;
	printf("Digite o salario bruto: ");
	scanf("%d", &salarioBruto);
	printf("Digite a quantidade de anos na empresa: ");
	scanf("%d", &quantidadeAnos);
	printf("Digite o numero de filhos: ");
	scanf("%d", &numeroFilhos);
	if(quantidadeAnos > 5 && numeroFilhos > 2){
		taxa = 0.15;
		salarioAumentado = salarioBruto + salarioBruto * taxa;
		printf(" taxa = %.2f\n salario inicial = %d\n salario aumentado = %d ", taxa, salarioBruto, salarioAumentado);
	}else{
		taxa = 0.08;
		salarioAumentado = salarioBruto + salarioBruto * taxa;
		printf(" taxa = %.2f\n salario inicial = %d\n salario aumentado = %d ", taxa, salarioBruto, salarioAumentado);
	}
}
