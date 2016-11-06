#include <iostream>
#include <cstring>

int bag[100][100],dp[2500],val[100][100];
int main()
{
 int k,m,n,i,j,t,cnt=0;
 while(scanf("%d %d",&t,&m)!=EOF)
 {
  memset(dp,0,sizeof(dp));
  memset(val,0,sizeof(val));
  memset(bag,0,sizeof(bag));
  for(i=0;i<t;i++)
  {
        scanf("%d",&n);
        bag[i][0]=n;
        for(j=1;j<=n;j++)
            scanf("%d %d",&bag[i][j],&val[i][j]);
  }
    for(i=0;i<t;i++)
     for(j=m;j>=0;j--)
      for(k=1;k<=bag[i][0];++k)
       if(bag[i][k]<=j)
       dp[j]=dp[j]>(dp[j-bag[i][k]]+val[i][k])?dp[j]:(dp[j-bag[i][k]]+val[i][k]);
         printf("Case %d: %d\n",++cnt,dp[m]);
   printf("\n");
 }
 return 0;
}
