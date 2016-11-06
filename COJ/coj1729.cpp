#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;
int L1[1002],L2[1002];
int dp[1002][1002];
int LST(int n)
{
	int i,j,k;
	memset(dp,0,sizeof(dp));
	for(j=1;j<=n;j++)
	{
		for(k=1;k<=n;k++)
		{
			if(L1[j]==L2[k])
			{
				dp[j][k]=max(dp[j][k],dp[j-1][k-1]+1);
			}
			else
			{
				dp[j][k]=max(dp[j-1][k],dp[j][k-1]);
			}
		}
	}
	return dp[n][n];
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>L1[i];
			L2[n-i+1]=L1[i];
		}
		int l=n-LST(n);
		cout<<l<<endl;
	} 
	return 0;
}
