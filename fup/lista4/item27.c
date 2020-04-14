//Letícia Rodrigues Neri

//Engenharia de Computação - UFC

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
