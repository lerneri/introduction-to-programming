#include <stdio.h>

int main (){
  double i, N, s, avg;
  printf("Digite um número inteiro positivo: ");
  scanf("%lf",&N);
  for (s=0, i=1; i<=N; i++){
    s = s+i;
  }
  avg=s/N;
  printf("Média da soma dos %.0lf primeiros inteiros positivos = %.1lf",N,avg);
  return 0;
}
