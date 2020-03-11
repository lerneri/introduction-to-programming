#include <stdio.h>

int main(void) {
  float a, b, c;
  printf("Insira três valores reais:");
  scanf("%f %f %f",&a,&b,&c);
  if (a<b+c && b<a+c && c<a+b){
    printf("Esses são lados de um triângulo\n");
      if (a==b && b==c){
    printf("equilátero\n");
    return 0;
    }
  if (a==b || b==c || a==c){
     printf("isósceles\n");
    }
  else{
    printf("escaleno\n");
  }
  }
  else{
    printf("Esses não são lados de um triângulo ");
  }

  return 0;
}
