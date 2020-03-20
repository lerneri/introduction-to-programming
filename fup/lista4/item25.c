#include <stdio.h>
#include <math.h>

int main(void) {
 double x, n, i; 
 scanf("%lf",&n);
 for(i=1; i<=n; i++){
   x=i*i;
   printf("%.0lf\n", x);
  }
 return 0;
}
