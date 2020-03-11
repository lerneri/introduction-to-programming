#include <stdio.h>

int main(void) {
  int age;
  printf("Insira a idade do nadador: ");
  scanf("%d",&age);
  if (age<5){
    printf("Não há categoria para a idade apresentada");
  }
  if (age>=5 && age<=7){
    printf("Categoria infantil");
  }
  if (age>=8 && age<=10){
    printf("Categoria infanto-juvenil");
  }
  if (age>=11 && age<=15){
    printf("Categoria juvenil");
  }
  if (age>=16 && age <30){
    printf("Categoria adulto");
  }
  if (age>=30){
    printf("Categoria master");
  }
  return 0;
}
