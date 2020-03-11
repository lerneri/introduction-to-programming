#include <stdio.h>

int main(void) {
  float pold, pnew;
  printf("Insira o preço antigo do produto: R$");
  scanf("%f",&pold);
  if (pold<=50.0)
  { pnew=pold*1.05;
   printf("O novo preço é R$%.2f\n", pnew); 
  }
  if (pold>50.0 && pold<=100.0){
    pnew=pold*1.1;
    printf("O novo preço é R$%.2f\n", pnew);
  }
  if (pold>=100.0){ 
    pnew=pold*1.15;
    printf("O novo preço é R$%.2f\n", pnew); 
  }
  if (pnew<=80.0){
    printf("Classificação D");
  }
  if (pnew>80.0 && pnew<=120.0){
    printf("Classificação C");
  }
  if (pnew>120.0 && pnew<=200.0){
    printf("Classificação B");
  }
  if (pnew>200.0){
    printf("Classificação A");
  }
  return 0;
}
