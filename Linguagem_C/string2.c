#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 1000
int main(void) {
	FILE *arqS;
	char linha[tam], nome[50];
	int pos;
	printf("Digite o nome do arquivo: ");
	memset(nome, '\0', sizeof(nome));
	scanf(" %[^\n]", &nome);
	
	if((arqS = fopen(nome, "a")) == NULL) {
		printf("Lasquei-me\n");
		exit(1);
	}
	
	for(pos = 0; pos < 5; pos++) {
		memset(linha, '\0', sizeof(linha));
		printf("Digite a %d linha: ", pos+1);
		scanf(" %[^\n]", &linha);
		linha[strlen(linha)] = '\n';
		if(fputs(linha, arqS) == EOF) {
			printf("Erro escrevendo!\n");
			fclose(arqS);
			exit(2);
			
		}
	}
	fclose(arqS);
	return 0;	
}
