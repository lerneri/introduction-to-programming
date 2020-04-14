//Letícia Rodrigues Neri

//Engenharia de Computação - UFC

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int x, i;
	double gradeA=0 , gradeB=0, gradeC, sum, avg;
	scanf("%d",&x);
  
	for(sum=0, i=1;i<=x;i++){
		scanf("%lf",&gradeC);
		sum+=gradeC;
    if (gradeC>gradeA) {
      gradeB = gradeA;
      gradeA = gradeC;
     }
    else if (gradeC>gradeB){
      gradeB = gradeC;
     }
	}
  
    printf("As duas maiores notas são: %lf e %lf\n", gradeA, gradeB);
    avg=sum/x;
	printf("Média das notas: %lf\n",avg);
	return 0;
}
