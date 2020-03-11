#include <stdio.h>
#include <stdlib.h>

int main() {
int x;
float y, z, w;
printf("Olá! Por favor, digite dois números:");
scanf("%f %f",&y,&z);
printf("Escolha uma dentre as operações listadas:\n 1 - Média \n 2 - Diferença\n 3 - Produto\n 4 - Divisão\n");
scanf("%d",&x);
if (x==1){
  w=(y+z)/2;
  printf("%f", w);
}
if (x==2){
  w=(y-z);
  printf("%f", w);
}
if (x==3){
  w=(y*z);
  printf("%f", w);
}
if (x==4){
  if (z==0){
    printf("Essa operação é inválida!");
  }
  else {
    w=(y/z);
    printf("%f", w);
  };
}
  
    return 0;
}
