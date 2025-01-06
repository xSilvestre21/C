#include<stdio.h>
int main(void){
	int ano[365], soma=0, pos, ma=0, me=0;
	float media;
	for(pos=0; pos<365; pos++){
		printf("Temperatura maxima do dia %d: ", pos+1);
		scanf("%d", &ano[pos]);
		soma= soma+ano[pos];
	}
	media= soma/365.0;
	printf("Soma= %d\n", soma);
	printf("Media= %.1f\n", media);
	printf("Numeros maiores que a media: \n"); 
	for(pos=0; pos<365; pos++){
		if(ano[pos]>= media){
			printf("%d\n", ano[pos]);
			ma=ma+1;
		}else{
			me=me+1;
		}
	}
	printf("Quantidade de temperaturas acima da media= %d\n", ma);
	printf("Quantidade de temeraturas abaixo da media= %d\n", me);
	if(ma>me){
		printf("Houveram mais dias com temperaturas acima da media.");
	}else if(me>ma){
		printf("Houveram mais dias com temperaturas abaixo da media.");
	}
	
	return 0;
}

//Uma empresa de mineração vai se mudar para nossa cidade e pediu um programa em c
//para estudos sobre o clima. Seu programa deve pedir para o usuário as temperaturas
//máximas dos últimos 365 dias. Ao final do processamento, mostre a tempratura média
//e todas as temperaturas acima desta média. Tivemos mais dias com temperaturas acima
//ou abaixo da média?
