#include <iostream>
using namespace std;

int main()
{
	int N,M;
	while(cin>>N>>M)
	{
		int A[N+2];
		for(int i=0;i<N;i++)
		{
			cin>>A[i];
		}
		int flag=0;
		for(int j=0;j<N;j++)
		{
			for(int k=j+1;k<N;k++)
			{
			    if((A[j]^A[k])>M)
			    {
			    	flag=1;
			    	break;
				}
			}
		}
		if(flag==1)
		{
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
} 
