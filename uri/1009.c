#include <stdio.h>
 
int main() {
 
 double fix, sales, total;
 char name[100];
 scanf("%s",name);
 scanf("%lf",&fix);
 scanf("%lf",&sales);
 total = fix + sales*.15;

 printf("TOTAL = R$ %.2f",total);
 printf("\n");
    return 0;
}
