//Letícia Rodrigues Neri
//496518
//Engenharia de Computação - UFC
//FUP - Lista 4 - item 13

/*ALGORITMO

	DECLARE n, x, i, par=0, impar=0 NUMERICO

	LEIA n


	PARA  i=1 ATÉ  i=n FAÇA
	INÍCIO
		LEIA x

		SE x%2 = 0 ENTAO
		INÍCIO
			par🡐par+1

		FIM
		SENÃO
 		INÍCIO
			impar🡐impar+1

		FIM
	FIM
	ESCREVA Você digitou par números pares e impar números ímpares


FIM_ALGORITMO.*/

#include <stdio.h>

int main (){
	int n, x, i, par=0, impar=0;
	for (i=1; i<=n; i++){
		scanf("%d",&x);
		if(x%2==0){
			par++;
		}
		else{
			impar++;
		}
	}
	printf("Você digitou %d números pares e %d números ímpares",par,impar);
	return 0;
}