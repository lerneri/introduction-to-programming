#include <stdio.h>

int main(void) {
  float x, f;
  printf("Insira um valor de x:");
  scanf("%f",&x);
  if(x<=1){
    f=1;
    printf("f(x)=%f", f);
  }
  if(x>1 && x<=2){
    f=2;
    printf("f(x)=%f", f);
  }
  if(x>2 && x<=3){
    f=x*x;
    printf("f(x)=%f", f);
  }
  if(x>3){
    f=x*x*x;
    printf("f(x)=%f", f);
  }
  return 0;
}
