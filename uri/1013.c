#include <stdio.h>
#include <stdlib.h>
 
int main() {

int a, b, c, mab, mabc;
scanf("%d %d %d",&a, &b, &c);
mab = (a + b + abs(a-b))/2;
mabc = (mab + c + abs(mab-c))/2;

printf("%d eh o maior\n", mabc);
    return 0;
}


