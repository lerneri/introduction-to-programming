#include <iostream>

using namespace std;

int main ()
{
	int N=0, num=0, sum=0;
	
	cin >> N;
	
	for (int i=0; i < N; i++)
	{
		cin >> num;
		
		sum+=num;
	}
	cout <<sum<<"\n";
	
	
	return 0;
}
