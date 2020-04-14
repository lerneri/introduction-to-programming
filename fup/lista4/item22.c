//Letícia Rodrigues Neri
//496518
//Engenharia de Computação - UFC
//FUP - Lista 4 - item 22

/*ALGORITMO

	DECLARE i, n NUMERICO

	LEIA n

	a🡐1

	b🡐1

	ESCREVA "%ld\n%ld\n",a,b

	PARA  i=3 ATÉ i n FAÇA
	INÍCIO
		c🡐a+b

		ESCREVA "%ld\n",c
		a🡐b

		b🡐c

	FIM


FIM_ALGORITMO.*/

#include <stdio.h>

int main (){
    long int a, b, c;
    int i, n;
    scanf("%d",&n);
    a=1;
    b=1;
    printf("%ld\n%ld\n",a,b);
    for (i=3;i<n;i++){
        c=a+b;
        printf("%ld\n",c);
        a=b;
        b=c;
    }
   
    return 0;
}
