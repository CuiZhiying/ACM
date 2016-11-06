#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int a[1005],b[1005],dp[1005],n,m;

int LICS()
{
	int i,j,max;
	memset(dp,0,sizeof(dp));
	for(i=0;i<=n;i++)
	{
		max=0;
		for(j=1;j<=m;j++)
		{
			if(a[i]>b[j]&&max<dp[j]) max = dp[j];
			if(a[i]==b[j]) dp[j]=max+1;
		}
	}
	max=0;
	for(i=1;i<=m;i++)
	{
		if(max<dp[i]) max=dp[i];
	}
	return max;
}

int main()
{
	int T,i;
	cin>>T;
	while(T--)
	{
		cin>>n;
		for(i=1;i<=n;i++)
		{
			cin>>a[i]; 
		}
		cin>>m;
		for(i=1;i<=m;i++)
		{
			cin>>b[i]; 
		}
		cout<<LICS()<<endl; 
	 } 
	 return 0;
}
