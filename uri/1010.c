#include <stdio.h>
 
int main() {
int code1, n1, code2, n2;
float price1, price2, valor;
scanf("%d %d %f",&code1, &n1, &price1);
scanf("%d %d %f",&code2, &n2, &price2);
valor = n1*price1 +n2*price2;
printf("VALOR A PAGAR: R$ %.2f", valor);
printf("\n");
    return 0;
}
