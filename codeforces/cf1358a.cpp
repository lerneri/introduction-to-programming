// Codeforces Round #645 (Div. 2)
// Letícia R. Neri
// A. Park Lighting - O(t)

#include <bits/stdc++.h>

using namespace std;

int main (){
	ios::sync_with_stdio(false);
	cin.tie(0);
  
	int t;
	
	cin >> t;
	
	while(t--){
		int n, m;
		cin >> n >> m;
		if (n*m%2==0) cout << (n*m)/2 << "\n";
		else cout << (n*m)/2 + 1 << "\n";
	}
	
	return 0;
	}
