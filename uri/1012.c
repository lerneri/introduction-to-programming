#include <stdio.h>
 
int main() {

double A, B, C, ST, St, SC, SQ, SR;
scanf("%lf %lf %lf",&A, &B, &C);
ST = (A*C)/2;
SC = C*C*3.14159;
St = (A+B)*C/2;
SQ = B*B;
SR = A*B;

{printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", ST, SC, St, SQ, SR);}
    return 0;
}
