#include <stdio.h>

int main(void) {
  int x, y;
  printf("Digite um inteiro: ");
  scanf("%d",&x);
  y=x%3;
  if (y==0){
    printf("%d é múltiplo de 3", x);
  }
  else{
    printf("%d não é múltiplo de 3", x);
  }
  return 0;
}
