#include <stdio.h>

int main(void) {
  int age;
  float weight;
  printf("Digite sua idade: ");
  scanf("%d",&age);
  printf("Digite seu peso, em kg: ");
  scanf("%f",&weight);

  if(age<20){
    if(weight<=60){
      printf("Grupo de risco 9");
    }
    if(weight>60 && weight<=90){
      printf("Grupo de risco 8");
    }
    if(weight>90){
      printf("Grupo de risco 7");
    }
  }
   if(age>=20 && age<=50){
    if(weight<=60){
      printf("Grupo de risco 6");
    }
    if(weight>60 && weight<=90){
      printf("Grupo de risco 5");
    }
    if(weight>90){
      printf("Grupo de risco 4");
    }
  }
    if(age>50){
    if(weight<=60){
      printf("Grupo de risco 3");
    }
    if(weight>60 && weight<=90){
      printf("Grupo de risco 2");
    }
    if(weight>90){
      printf("Grupo de risco 1");
    }
  } 
  return 0;
}
