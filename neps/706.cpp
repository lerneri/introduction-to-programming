#include <iostream>

using namespace std;

int main (){
	int X, Y;
	cin >> X;
	Y=X-9;
	if(Y>=0){
		cout << Y << "\n";
		return 0;
	}
	else{
		cout << Y+24 << "\n";
	}
	return 0;
}
