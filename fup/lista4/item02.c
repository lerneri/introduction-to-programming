#include <stdio.h>
#include <stdlib.h>

int main(void) {
 double prod, n;
 //Insira fatores para realizar a multiplicação. O número 0 serve como comando de parada.
 prod=1;
 n=1;
 while(n!=0){
   prod=prod*n;
   scanf("%lf",&n);
   }
 printf("%lf",prod);
 return 0; 
}
