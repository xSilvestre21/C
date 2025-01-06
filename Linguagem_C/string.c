#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 1000

int main(void){
	FILE *arqE;
	char linha[tam];
	if((arqE = fopen("entrada.txt", "r")) == NULL) {
		printf("Danou-se!\n");
		exit(1);
	}
	while(!feof(arqE)) {
		if(fgets(linha, tam, arqE)) {
			printf("%s", linha);
		}
	}
	fclose(arqE);
	return 0;
}
