#include <stdio.h>

int main(void) {
  float saldo, credito;
  printf("Insira o saldo médio anual: R$");
  scanf("%f",&saldo);
  if (saldo>=400.0){
    credito = saldo*.3;
    printf("Você recebeu crédito de R$%.2f",credito);
  }
    if (saldo>=300.0 && saldo<400.0){
    credito = saldo*.25;
    printf("Você recebeu crédito de R$%.2f",credito);
  }
    if (saldo>=200.0 && saldo<300.0){
    credito = saldo*.2;
    printf("Você recebeu crédito de R$%.2f",credito);
  }
    if (saldo<=200.0){
    credito = saldo*.1;
    printf("Você recebeu crédito de R$%.2f",credito);
  }
  
  return 0;
}
