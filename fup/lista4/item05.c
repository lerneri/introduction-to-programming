//Letícia Rodrigues Neri

//Engenharia de Computação - UFC

/*ALGORITMO
	DECLARE n, m NUMERICO

	LEIA m

	ENQUANTO n!=0 FAÇA
	INÍCIO
		LEIA n

		SE n>m ENTAO
		INÍCIO
			m🡐n

		FIM
	FIM
	ESCREVA O maior número é m
FIM_ALGORITMO.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
 double n, m;
 
 scanf("%lf",&m);
 while(n!=0){//Inserir 0 para parar as entradas
   scanf("%lf",&n);
   if(n>m){
     m=n;
   }
   }
 printf("O maior número é %lf",m);
 return 0; 
}
