//Letícia Rodrigues Neri

//Engenharia de Computação - UFC

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int voto, ze=0, gal=0, gil=0;
  
	do{
	 scanf("%d",&voto);
	 if(voto==1){
		 ze++;
	 }
	 if(voto==2){
		 gal++;
	 }
	 if(voto==3){
		 gil++;
	 }
	 
	}while(voto!=0);
     
	if(ze>gal && ze> gil){
	    printf("Zé é o vencedor, com %d votos\n", ze);
      return 0;
	}
	if(gal>ze && gal>gil){
		printf("Gal é a vencedora, com %d votos\n", gal);
    return 0;
	}
	if(gil>ze && gil>gal){
		printf("Gil é o vencedor, com %d votos\n", gil);
    return 0;
	}
	if(ze==gal && gal>gil){
		printf("Zé e Gal empataram, com %d votos\n", ze);
    return 0;
	}
	if(gal==gil && gal>ze){
		printf("Gal e Gil empataram, com %d votos\n", gal);
    return 0;
	}
	if(ze==gil && gil>gal){
		printf("Zé e Gil empataram, com %d votos\n", gil);
    return 0;
	}
	if(ze==gil==gal){
		printf("A eleição teve empate com os três candidatos, cada um teve %d votos \n", ze);
    return 0;
	}
	
}
