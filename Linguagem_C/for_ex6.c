#include<stdio.h>
int main(void){
	int num, ma, me;
	int pos;
	for(pos=0; pos<5; pos++){
		printf("Digite o %d numero: ", pos+1);
		scanf("%d", &num);
		if(pos==0){
			ma=num;
			me=num;
		}else{
			if(num>ma){
				ma=num;
			}else if(num<me){
				me=num;
			}
		}
	}
	printf("%d e %d", ma, me);

	return 0;
}

//Carrega 5 números e fala qual deles é o maior e o menor.


