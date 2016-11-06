#include <iostream>
#include <cstring>
using namespace std;
#define MAXN 35
typedef long long LL;
LL dp[MAXN][MAXN],ret;
int d[MAXN],n,sum;
 
int main()
{
	memset(dp,0,sizeof(dp));
	dp[0][0]=1;
	for(int i=1;i<16;i++)
	{
		for(int j=0;j<=30;j++)
		{
			for(int k=0;k<=j;k++)
			{
				dp[i][j]+=dp[i-1][j-k];
			}
		}
	}
	while(cin>>n&&n!=0)
	{
		sum=0;
		ret=1;
		for(int i=0;i<n;i++)
		{
			cin>>d[i];
			sum+=d[i]; 
		}
		for(int i=0;i<sum;i++) ret+=dp[n][i];    //总分较小的情况 
		for(int i=0;i<n;i++)                    //总分相等的情况 
		{
			for(int j=0;j<d[i];j++)
			{
				ret+=dp[n-i-1][sum-j];  //第一个评委打j分，后n-i-1个评委打sum-j分 
			}
			sum-=d[i];
		}
		cout<<ret<<endl;	
	}
	return 0;
}
