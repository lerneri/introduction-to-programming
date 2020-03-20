#include <stdio.h>

int main(void) {
 int x, i;
 x=2;
 for(i=1; i<=10; i++){
  printf("2^%d=%d\n",i,x);
  x=2*x;
 }
 return 0;
}
