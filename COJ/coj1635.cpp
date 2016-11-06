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
		for(int i=0;i<sum;i++) ret+=dp[n][i];    //�ֽܷ�С����� 
		for(int i=0;i<n;i++)                    //�ܷ���ȵ���� 
		{
			for(int j=0;j<d[i];j++)
			{
				ret+=dp[n-i-1][sum-j];  //��һ����ί��j�֣���n-i-1����ί��sum-j�� 
			}
			sum-=d[i];
		}
		cout<<ret<<endl;	
	}
	return 0;
}
