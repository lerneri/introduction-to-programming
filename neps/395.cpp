//Letícia Neri

#include <bits/stdc++.h>

using namespace std;

int main (){
    int v[10];
    int i;
    for (i=0;i<10;i++){
        cin >> v[i];
    }
    int N;
    cin >> N;
    for (i=0;i<10;i++){
        if(v[i]==N){
            cout << "SIM\n";
            return 0;
        }
    }
    cout << "NAO\n";
    return 0;
}
