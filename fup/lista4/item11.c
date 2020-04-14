//Letícia Rodrigues Neri

//Engenharia de Computação - UFC
//FUP - Lista 4 - item 11

#include <stdio.h>

int main (){
	int min, max, i, soma;
	scanf("%d %d",&min,&max); // Lê os limites mínimo e máximo do intervalo
	for (i=min, soma=0;i<=max;i++){
		if(i%2==0){
			printf("%d\n",i);
			soma+=i;
		}
		
	}
	printf("soma dos pares = %d",soma);
	return 0;
