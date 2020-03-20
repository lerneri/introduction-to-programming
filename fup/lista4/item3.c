#include <stdio.h>

int main (){
  int N, i;
  // N<=0
  double s, avg;
  printf("Digite um número inteiro positivo: ");
  scanf("%d",&N);
  for (s=0, i=1; i<=N; i++){
    s = s+i;
  }
  avg=s/N;
  printf("Média da soma dos %d primeiros inteiros positivos = %.1lf",N,avg);
}
