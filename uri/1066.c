#include <stdio.h>
 
int main() {
 
    int positivos, negativos, pares, impares, i, x;
    positivos=0;
    negativos=0;
    pares=0;
    impares=0;
    for(i=1;i<=5;i++){
        scanf("%d",&x);
        if(x>0){
          positivos ++;
        }
        if(x%2==0){
          pares++;
        }
        if(x%2!=0){
          impares++;
        }
        if(x<0){
          negativos ++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",pares,impares,positivos,negativos);
    return 0;
}
