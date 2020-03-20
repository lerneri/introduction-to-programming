#include <stdio.h>
#include <math.h>

int main(void) {
 int A, B, i;
 
 A=5000000;
 B=7000000;
 for(i=1; ; i++){
 A=A*1.03;
 B=B*1.02;
  if (A>B){
    printf("A população de A ultrapassa a de B em %d anos\n", i);
    return 0;
  }
 }
}
