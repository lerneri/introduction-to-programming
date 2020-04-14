//Letícia Rodrigues Neri
//496518
//Engenharia de Computação - UFC

/*ALGORITMO
DECLARE x, i NUMERICO

	DECLARE gradeA=0 , gradeB=0, gradeC, sum, avg NUMERICO

	LEIA x


	PARA sum=0, i=1 ATÉ i=x FAÇA
	INÍCIO
		LEIA gradeC

		sum🡐gradeC

		SE gradeC>gradeA ENTAO
		INÍCIO
			gradeB🡐gradeA

			gradeA🡐gradeC

		FIM
		SE gradeC>gradeB ENTAO
		INÍCIO
			gradeB🡐gradeC

		FIM
	FIM
	ESCREVA "As duas maiores notas são: gradeA e gradeB
	avg🡐sum/x

	ESCREVA Média das notas: avg
FIM_ALGORITMO.*/ 

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