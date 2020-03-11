#include <stdio.h>
#include <math.h>

int main(void) {
  float a, b, c;
  printf("Insira três valores reais:");
  scanf("%f %f %f",&a,&b,&c);
  if (a<b+c && b<a+c && c<a+b){
    printf("Esses são lados de um triângulo ");
      if (a==b && b==c){
       printf("equilátero acutângulo\n");
       return 0;
      }
   if (a==b || b==c || a==c){
     printf("isósceles ");
    }
   else{
     printf("escaleno ");
   }
   if (a*a==(b*b + c*c) || b*b==(a*a + c*c) || c*c==(a*a + b*b)){
     printf("retângulo.\n");
     return 0;  
   }
    if (a*a>(b*b + c*c) || b*b>(a*a + c*c) || c*c>(a*a + b*b)){
     printf("obtusângulo.\n");  
   }
    else{
      printf("acutângulo.\n");
    }
  }
  else{
    printf("Esses não são lados de um triângulo ");
  }

  return 0;
}
