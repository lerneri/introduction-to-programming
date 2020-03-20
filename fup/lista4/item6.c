#include <stdio.h>

int main (){
  int N, i;
  double f;
  printf("Digite um número inteiro positivo:");
  scanf("%d",&N);
  f=1;
  for (i=1; i<=N; i++){
    f = f*i;
  }
  printf("%d! = %.0lf",N,f);
}
