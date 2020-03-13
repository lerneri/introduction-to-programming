#include <stdio.h>

int main(void) {

  float height, weight;
  char gender;


  printf("Insira sua altura, em metros:\n");
  scanf("%f",&height);
  printf("Insira seu sexo (F ou M):\n");
  scanf(" %c",&gender);

  if (gender == 'F'){
    weight = (62.1*height) - 44.7;
    printf("Seu peso ideal é %.3fkg",weight);
  }
  if (gender == 'M'){
    weight = (72.7*height) - 58;
    printf("Seu peso ideal é %.3fkg",weight);
  }
  
  return 0;
  
}
