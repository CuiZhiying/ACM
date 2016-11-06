#include <iostream>
#include <cmath>
#include <cstring>
#define INF (0x1<<30)
int dp[25][25];
int n,m;
using namespace std;
typedef struct{
	int x,y;
}Pos;
Pos start,dist;
Pos dir[8]={{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};
int dp1(Pos fx)
{
	if(dp[fx.x][fx.y]>=0) return dp[fx.x][fx.y];
	dp[fx.x][fx.y]=INF;
	Pos temp;
	for(int i=0;i<8;i++)
	{
		temp.x=fx.x+dir[i].x;
        temp.y=fx.y+dir[i].y;
        if(temp.x>=1 && n>=temp.x && temp.y>=1&&temp.y<=m)
        {
            if(fx.y-temp.y==-2&&fx.x==dist.x) continue;
            if(fx.y-temp.y== 2&&fx.x==dist.x) continue;
            if(fx.y-temp.y==-1&&fx.y==dist.y) continue;
            if(fx.y-temp.y== 1&&fx.y==dist.y) continue;
            dp[fx.x][fx.y]=min(dp[fx.x][fx.y],dp1(temp)+1);
        }
	}
	return dp[fx.x][fx.y];
}
int main()
{
	while(cin>>n>>m>>dist.x>>dist.y>>start.x>>start.y)
	{
		memset(dp,-1,sizeof(dp));
		dp[dist.x][dist.y]=0;
		int ministep=dp1(start);
		if(ministep>=INF) cout<<"-1"<<endl;
		else cout<<ministep<<endl;
	}
	return 0;
} 
