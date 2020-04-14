// Código (OBI 2015)

#include <iostream>

using namespace std;

int main (){
    int N,i, padrao=0;
    int v[10002];
    cin >> N;
    for (i=0;i<N;i++){
        cin >> v[i];
    }
    for (i=N;i<=N+1;i++){
        v[i]=7;
    }
    for (i=0;i<N;i++){
        if (v[i]==1 && v[i+1]==0 && v[i+2]==0){
            padrao++;
        }
        
    }
    cout << padrao << "\n";
    return 0;
}
