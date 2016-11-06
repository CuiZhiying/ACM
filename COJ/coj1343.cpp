#include <iostream>

using namespace std;
#define MAXN 100010
int a[MAXN],b[MAXN],N,M,K;
int main() 
{
	while(cin>>N>>M>>K)
	{
		for(int i=1;i<=N;i++)
		    cin>>a[i];
		for(int i=1;i<=M;i++)
	        cin>>b[i];
	    long long ans=0;
	    int Y=M;
	    for(int i=1;i<=N;i++)
	    {
	    	int x=a[i];
	    	while(Y&&x+b[Y]>K) --Y;
	    	ans+=Y;
		}
		cout<<ans<<endl;
	}
	return 0;
}
