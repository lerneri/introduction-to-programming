//Letícia Rodrigues Neri
//496518
//Engenharia de Computação - UFC

/*ALGORITMO

    DECLARE i, n, h NUMERICO
	LEIA n
	PARA i=1 ATÉ i =n FAÇA
	INÍCIO
		h ← h+ 1.0/i 
	FIM
	ESCREVA h

FIM_ALGORITMO.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
 int i, n;
 double h;
 scanf("%d",&n);
 for(h=0, i=1;i<=n;i++){
   h= h+ 1.0/i ;
   }
 printf("%lf",h);
 return 0; 
}