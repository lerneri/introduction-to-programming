//Letícia Rodrigues Neri

//Engenharia de Computação - UFC
//FUP - Lista 4 - item 13

#include <stdio.h>

int main (){
	int n, x, i, par=0, impar=0;
	for (i=1; i<=n; i++){
		scanf("%d",&x);
		if(x%2==0){
			par++;
		}
		else{
			impar++;
		}
	}
	printf("Você digitou %d números pares e %d números ímpares",par,impar);
	return 0;
}
