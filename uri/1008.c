#include <stdio.h>
 
int main() {
 int number, hours;
 float w, W;
 scanf("%d",&number);
 scanf("%d",&hours);
 scanf("%f",&w);
 W = w*hours;
 printf("NUMBER = %d",number);
 printf("\nSALARY = U$ %.2f\n",W);
    return 0;
}
