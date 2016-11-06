#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

bool prime(long long s)
{
	long long O=sqrt(s); 
	for(int i=2;i<=O;i++)
	{
		if(s%i==0) return false;
	}
	return true;
}
int main()
{
	int N;
	while(cin>>N){
		long long ex[N][2];
		int count=0;
		for(int i=0;i<N;i++)
		{
			cin>>ex[i][0];
			ex[i][1]=0;
		}
		for(int i=0;i<N-1;i++)
		{
			if(ex[i][1]==0)
			{
				for(int j=i+1;j<N;j++)
		    	{
		    		if(ex[j][1]==0)
		    		{
		    			long long sum=ex[i][0]+ex[j][0];
		    			if(prime(sum))
		    			{
		    				count++;
		    				ex[i][1]=1;
		    				ex[j][1]=1;
		    				break;
						}
					}
		    	}
			}
		}
		cout<<count<<endl; 
	}
	return 0;
}
