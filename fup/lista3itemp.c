#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main(void) {
  double a, b, c, A, B, C, deg;
  deg = 180.0 / PI;

  printf("Insira três valores reais:");
  scanf("%lf %lf %lf",&a,&b,&c);
  if (a<b+c && b<a+c && c<a+b){
    printf("Esses são lados de um triângulo ");
  
   if (a*a==(b*b + c*c) || b*b==(a*a + c*c) || c*c==(a*a + b*b)){
    A = deg*acos((b*b + c*c - a*a)/(2*b*c));
    B = deg*acos((a*a + c*c - b*b)/(2*a*c));
    C = deg*acos((b*b + a*a - c*c)/(2*b*a));
    printf("retângulo de ângulos ");
    printf("%lf° %lf° e %lf°", A, B, C);  
   }
    
  }
  else{
    printf("Esses não são lados de um triângulo ");
  }

  return 0;
}
