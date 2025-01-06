#include <stdio.h>
int main() {
	int nota1, nota2, notaExame;
	float media;
	printf("Digite a primeira nota: ");
	scanf("%d", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%d", &nota2);
	media = (nota1 + nota2) / 2.0;
	printf("nota 1 = %d, nota 2 = %d, media = %.2f \n", nota1, nota2, media);
	if(media < 0 || media > 100) {
		printf("Valores fora do aceitavel");
		return;
	}
	if(media >= 70) {
		printf("Aluno aprovado!");
	}
	if(media >= 40 && media <= 69) {
		printf("Aluno em exame final \n");
		printf("Digite a nota do Exame: ");
		scanf("%d", &notaExame);
		if(media + notaExame >= 100){
			printf("Aluno aprovado!");
		}else{
			printf("Aluno reprovado!");
		}
		
	}else{
		printf("Aluno Reprovado!");
	}
	return 0;
}
