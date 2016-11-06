#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,S,D1,D2,D3;
		cin>>N>>S>>D1>>D2>>D3;
		int count0=0,count1=0,count2=0,count3=0,w[N+2];
		for(int i=0;i<N;i++)
		{
			cin>>w[i];
		}
		for(int j=0;j<N;j++)
		{
			if(abs(S-w[j])<=D1)
			{
				count3++;
			}
			else if(abs(S-w[j])>D1&&abs(S-w[j])<=D2)
			{
				count2++;
			}
			else if(abs(S-w[j])<=D3&&abs(S-w[j])>D2)
			{
				count1++;
			}
		}
		cout<<count3<<" "<<count2<<" "<<count1<<endl;
	}
	return 0;
 } 
