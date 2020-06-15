
// 1021 - Notas e Moedas
// @lerneri

#include <bits/stdc++.h>

using namespace std;

int main (){
    double c;
    
    int cem=0, cinq=0, vint=0, dez=0, cinc=0, dois=0, um=0;
    
    cin >> c;
    
    int C=c;
    
    while (C>=100){
        C-=100;
    	cem++;
    }
    while (C>=50){
        C-=50;
    	cinq++;
    }
    while (C>=20){
        C-=20;
    	vint++;
    }
    while (C>=10){
        C-=10;
    	dez++;
    }
    while (C>=5){
        C-=5;
    	cinc++;
    }
    while (C>=2){
        C-=2;
    	dois++;
    }
    
    while (C>=1){
        C-=1;
    	um++;
    }
    
    cout << "NOTAS:\n";
    cout << cem << " nota(s) de R$ 100.00\n";
    cout << cinq << " nota(s) de R$ 50.00\n";
    cout << vint << " nota(s) de R$ 20.00\n";
    cout << dez << " nota(s) de R$ 10.00\n";
    cout << cinc << " nota(s) de R$ 5.00\n";
    cout << dois << " nota(s) de R$ 2.00\n";
    cout << "MOEDAS:\n";
	cout << um << " moeda(s) de R$ 1.00\n";
    
    cinq=0, vint=0, dez=0, cinc=0, um=0;
    
    C=c;
    C=(c-C)*100;
    
    while (C>=50){
        C=C-50;
    	cinq++;
    }
    while (C>=25){
        C=C-25;
    	vint++;
    }
    while (C>=10){
        C=C-10;
    	dez++;
    }
    while (C>=5){
        C=C-5;
    	cinc++;
    }
    while (C>=1){
        C=C-1;
    	dois++;
    }
    
	
	cout << cinq << " moeda(s) de R$ 0.50\n";
	cout << vint << " moeda(s) de R$ 0.25\n";
	cout << dez << " moeda(s) de R$ 0.10\n";
	cout << cinc << " moeda(s) de R$ 0.05\n";
	cout << um << " moeda(s) de R$ 0.01\n";
    
    return 0;
}

