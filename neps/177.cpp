#include <iostream>

using namespace std;

int main (){
    int X, i, j;
    for (i=1, j=0;i<=3;i++){
        cin >> X;
        if (X%2==0 || X%5==0){
            j++;
        }
    }
    cout << j << "\n";
    return 0;
}
