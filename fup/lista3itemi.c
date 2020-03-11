#include <stdio.h>
#include <math.h>
#include <complex.h>

int main() {
 double a, b, c, D;
 double complex x1, x2;
  printf("Insira os coeficientes da equação ax^2 + bx + c = 0\n");
  printf("a=");
  scanf("%lf",&a);
  printf("b=");
  scanf("%lf",&b);
  printf("c=");
  scanf("%lf",&c);
  D = (b*b) - (4.0*a*c) ;
  x1 = (- b + csqrt(D))/(2.0*a);
  x2 = (- b - csqrt(D))/(2.0*a);
  if(D<0.0){
   printf("As raízes da equação são %lf +%lfi e %lf %lfi\n", creal(x1), cimag(x1), creal(x2), cimag(x2));
  }
  else{
    printf("As raízes da equação são %lf e %lf\n", creal(x1), creal(x2));
  }
  return 0;
}
