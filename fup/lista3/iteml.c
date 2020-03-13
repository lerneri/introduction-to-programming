#include <stdio.h>

int main(void) {
  int a, b, r;
  printf("Digite um inteiro: ");
  scanf("%d",&a);
  printf("Digite outro inteiro, não-nulo: ");
  scanf("%d",&b);
  r=a%b;

  if (r==0){
    printf("%d é divisível por %d", a, b);
  }

  else{
    printf("%d é divisível por %d", a, b);
  }
  return 0;
}
