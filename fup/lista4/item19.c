#include <stdio.h>

int main (){
  int i, r, x;
  printf("Digite um número inteiro: ");
  scanf("%d",&x);
  for (i=1; i<=x; i++){
    r=x%i;
    if(r==0){
      printf("%d é divisor de %d\n",i, x);
    }
  }
}
