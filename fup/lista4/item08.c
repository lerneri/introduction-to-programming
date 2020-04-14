//Letícia Rodrigues Neri
//496518
//Engenharia de Computação - UFC

/*ALGORITMO
	DECLARE x, i NUMERICO
	x🡐1
	PARA i=1 ATÉ i =25 FAÇA
	INÍCIO
		x🡐x*2
	FIM
	ESCREVA Número de erros esperado pelo aluno em seu último programa: x
FIM_ALGORITMO.*/ 

#include <stdio.h>

int main (void){
	int x, i;
	x=1;
	for(i=1;i<=25;i++){
		x=x*2;
	}
	printf("Número de erros esperado pelo aluno em seu último programa: %d",x);
	return 0;
}