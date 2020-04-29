// @ lerneri - UFC - GEPC

#include <bits/stdc++.h>

using namespace std;

int main (){
  string number;
  int n, a=0, b=0;
  cin >> number;
  n=number.size();
  for(int i=0;i<n;i++){
    number[i]-=48;
    if(i%2==0) a+=number[i];
    else b+=number[i];
  }
  if (abs(a-b)%11==0){
    cout << "S\n";
    return 0;
    }
	else cout << "N\n";
        
  return 0;
}
