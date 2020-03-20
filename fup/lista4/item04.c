#include <stdio.h>

int main(void) {
 int i, n;
 //n<=1023
 double x;
 x=2;
 scanf("%d",&n);
 for(i=1; i<=n; i++){
  printf("2^%d=%.0lf\n",i,x);
  x=2*x;
 }
 return 0;
}
