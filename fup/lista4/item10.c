//Letícia Rodrigues Neri
//496518
//Engenharia de Computação - UFC

/*ALGORITMO
DECLARE voto, ze=0, gal=0, gil=0 NUMERICO

	REPITA 
	INÍCIO
		LEIA voto

		SE voto = 1 ENTAO
		INÍCIO
			ze++

		FIM
		SE voto = 2 ENTAO
		INÍCIO
			gal++

		FIM
		SE voto = 3 ENTAO
		INÍCIO
			gil++

		FIM
	FIM
	ATÉ voto = 0

	SE ze>gal E ze>gil ENTAO
	INÍCIO
		ESCREVA Zé é o vencedor, com ze votos
	FIM
	SE gal>ze E gal>gil ENTAO
	INÍCIO
		ESCREVA Gal é a vencedora, com gal votos 
	FIM
	SE gil>ze E gil>gal ENTAO
	INÍCIO
		ESCREVA Gil é o vencedor, com gil votos
	FIM
	SE ze = gal E gal>gil ENTAO
	INÍCIO
		ESCREVA Zé e Gal empataram, com ze votos
	FIM
	SE gal = gil E gal>ze ENTAO
	INÍCIO
		ESCREVA Gal e Gil empataram, com gal votos
	FIM
	SE ze = gil E gil>gal ENTAO
	INÍCIO
		ESCREVA Zé e Gil empataram, com gil votos
	FIM
	SE ze = gil==gal ENTAO
	INÍCIO
		ESCREVA A eleição teve empate com os três candidatos, cada um teve ze votos
	FIM
FIM_ALGORITMO.*/ 

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