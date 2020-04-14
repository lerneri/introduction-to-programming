//Letícia Rodrigues Neri

//Engenharia de Computação - UFC

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
