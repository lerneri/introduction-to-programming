//Interpretação A: Mostrar os múltiplo de 3 e de 5, simultaneamente

#include <stdio.h>

int main(void) {
 int NUM, i;
 //Vamos mostrar os múltiplos de 3 e os múltiplos de 5
 scanf("%d",&NUM);

 for(i=1; i<=NUM; i++){
  
  if (i%3==0){
    printf("%d é múltiplo de 3\n", i);
  }
 
  if (i%5==0){
    printf("%d é múltiplo de 5\n", i);
  }
  
 }

 return 0;
}
