//Letícia Rodrigues Neri
//496518
//Engenharia de Computação - UFC
//FUP - Lista 4 - item 15

/*ALGORITMO

	DECLARE A, B, p, i NUMERICO
	LEIA A
	LEIA B
	p🡐1
	PARA i=1 ATÉ i =B FAÇA
	INÍCIO
		p🡐p*A

	FIM
	ESCREVA p
	
FIM_ALGORITMO.*/


#include <stdio.h>

int main(){
 int A, B, p, i;
 scanf("%d",&A);
 scanf("%d",&B);
 p=1;
 for(i=1;i<=B;i++){
   p=p*A;
   }
 printf("%d",p);
 return 0; 
}
