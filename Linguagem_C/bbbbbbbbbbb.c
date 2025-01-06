#include <stdio.h>
int main(){
	int timeCasa, timeVisitante, pontuacao = 0, apostaCasa, apostaVisitante;
	printf("Aposta de gols da casa: ");
	scanf("%d", &apostaCasa);
	printf("Aposta de gols visitante: ");
	scanf("%d", &apostaVisitante);
	printf("aposta = %d x %d \n", apostaCasa, apostaVisitante);
	printf("Quantidade de gols da casa: ");
	scanf("%d", &timeCasa);
	printf("Quantidade de gols da visitante: ");
	scanf("%d", &timeVisitante);
	printf("placar = %d x %d \n", timeCasa, timeVisitante);
	
	if(timeCasa > timeVisitante){
		if(apostaCasa > apostaVisitante){
			pontuacao = pontuacao + 10;
		}
		if(apostaCasa == timeCasa){
			pontuacao = pontuacao + 5;
		}
		if(apostaVisitante == timeVisitante){
			pontuacao = pontuacao + 5;
		}
		printf("Pontuacao = %d", pontuacao);
	}
	
	
	if(timeCasa < timeVisitante){
		if(apostaCasa < apostaVisitante){
			pontuacao = pontuacao + 10;
		}
		if(apostaCasa == timeCasa){
			pontuacao = pontuacao + 5;
		}
		if(apostaVisitante == timeVisitante){
			pontuacao = pontuacao + 5;
		}
		printf("Pontuacao = %d", pontuacao);
	}
	
	
	else{
		if(apostaCasa == apostaVisitante){
			pontuacao = pontuacao +10;
		}
		if(apostaCasa == timeCasa){
			pontuacao = pontuacao + 5;
		}
		if(apostaVisitante == timeVisitante){
			pontuacao = pontuacao + 5;
		}
		printf("Pontuacao = %d", pontuacao);
	}
	
	return 0;
}
