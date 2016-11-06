#include <iostream>
#include <cstring>
using namespace std;
const int maxn =105;
int a[maxn][2*maxn];
int dp[maxn][2*maxn];
int max(int x,int y,int z)
{
    return max(max(x,y),max(y,z));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        memset(a,0,sizeof(a));
        memset(dp,0,sizeof(dp));
        for(int i =1;i<=n;i++)
        {
            for(int j = 1;j<=2*i-1;j++)
            {
                cin>>a[i][j];
                if(i==n)
                {
                   dp[n][j]=a[i][j];
                }
            }
        }


        for(int i = n-1;i>=1;i--)
        {
            for(int j =1;j<=2*i-1;j++)
            {
                dp[i][j]=max(dp[i+1][j],dp[i+1][j+1],dp[i+1][j+2])+a[i][j];
            }
        }

        cout<<dp[1][1]<<endl;
    }
    return 0;
}
