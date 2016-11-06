#include <iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,X,Y;
		cin>>N>>X>>Y;
		int num[N];
		for(int i=0;i<N;i++)
		{
			cin>>num[i];
		}
		if(num[0]==X)
		{
			if(num[N-1]==Y)
			{
				cout<<"BOTH"<<endl;
			}
			else cout<<"EASY"<<endl;
		}
		else
		{
			if(num[N-1]==Y)
			{
				cout<<"HARD"<<endl;
			}
			else cout<<"OKAY"<<endl;
		}
	}
	return 0;
}
