#include <stdio.h>

int main(void) {
  int tipo;
  float investimento, rendimento;
  printf("Escolha um tipo de investimento:\n1 - Poupança\n2 - Fundo de renda fixa");
  scanf("%d",&tipo);
  printf("Digite o valor a ser investido: R$");
  scanf("%f",&investimento);
  if (tipo==1){
    rendimento=investimento*1.1;
    printf("Seu investimento após um mês é: R$%.2f", rendimento);
  }    
   if (tipo==2){
    rendimento=investimento*1.15;
    printf("Seu investimento após um mês é: R$%.2f", rendimento);
  }
  return 0;
}
