//Interpretação B: Mostrar os múltiplos de 3 e 5, ou seja, 15

#include <stdio.h>

int main(void) {
 int NUM, i;
 
 scanf("%d",&NUM);

 for(i=1; i<=NUM; i++){
  if (i%15==0){
    printf("%d é múltiplo de 15\n", i);
  }
 }
 return 0;
