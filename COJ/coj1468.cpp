#include <iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,L;
		cin>>N>>L;
		int count=0; 
		while(N>=L)
		{
			N-=L;
			L++;
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
