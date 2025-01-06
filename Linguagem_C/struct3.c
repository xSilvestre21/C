#include<stdio.h>
struct registro{
	int ra1, ra2;
	float nota1, nota2;
};

int main(void){
	struct registro valor;
	printf("Digite o RA do primeiro aluno: ");
	scanf("%d", &valor.ra1);
	printf("Digite a nota do primeiro aluno: ");
	scanf("%f", &valor.nota1);
	printf("Digite o RA do segundo aluno: ");
	scanf("%d", &valor.ra2);
	printf("Digite a nota do segundo aluno: ");
	scanf("%f", &valor.nota2);
	if(valor.nota2 > valor.nota1){
		printf("RA = %d Nota = %.2f", valor.ra2, valor.nota2);
	}else if(valor.nota2 < valor.nota1){
		printf("RA = %d Nota = %.2f", valor.ra1, valor.nota1);
	}

	return 0;
}



//Escreva um programa em C para ler as notas e os Ras de dois alunos usando struct
//para agrupar int dos RA e os float das notas mostre o RA e a nota do aluno com a maior nota
