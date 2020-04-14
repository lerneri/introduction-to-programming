//Letícia Rodrigues Neri
//Engenharia de Computação - UFC
//FUP - Lista 4 - item 15

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
