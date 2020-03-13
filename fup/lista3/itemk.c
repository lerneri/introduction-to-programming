#include <stdio.h>

int main(void) {
  int x, y;
  printf("Digite um inteiro: ");
  scanf("%d",&x);
  y=x%5;
  if (y==0){
    printf("%d é divisível por 5", x);
  }
  else{
    printf("%d não é divisível por 5", x);
  }
  return 0;
}
