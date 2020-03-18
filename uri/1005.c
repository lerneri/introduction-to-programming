#include <stdio.h>
 
int main() {
 float A, B, MEDIA;
 scanf("%f",&A);
 scanf("%f",&B);
 if (A>=0.0 && A<=10.0 && B>=0.0 && B<=10.0){
  MEDIA = (3.5*A  +7.5*B)/11;
  printf("MEDIA = %.5f",MEDIA);
  printf("\n");
 }
    return 0;
}
