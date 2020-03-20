#include <stdio.h>

int main (){
  int N, i;
  // N>=0
  double f;
  printf("Digite um número inteiro não-negativo:");
  scanf("%d",&N);
  for (f=1, i=1; i<=N; i++){
    f = f*i;
  }
  printf("%d! = %.0lf",N,f);
  return 0;
}
