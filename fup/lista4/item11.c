//Letícia Rodrigues Neri
//496518
//Engenharia de Computação - UFC
//FUP - Lista 4 - item 11

/*ALGORITMO

	DECLARE min, max, i, soma NUMERICO

	LEIA min, max 

	PARA  i=min, soma=0 ATÉ i=max FAÇA
	INÍCIO
		SE i%2 = 0 ENTAO
		INÍCIO
			ESCREVA i
			soma🡐soma+i

		FIM
	FIM
	ESCREVA "soma dos pares" = soma


FIM_ALGORITMO.*/

#include <stdio.h>

int main (){
	int min, max, i, soma;
	scanf("%d %d",&min,&max); // Lê os limites mínimo e máximo do intervalo
	for (i=min, soma=0;i<=max;i++){
		if(i%2==0){
			printf("%d\n",i);
			soma+=i;
		}
		
	}
	printf("soma dos pares = %d",soma);
	return 0;