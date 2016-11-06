#include <stdio.h>
#define MAXN 310
using namespace std;
char a[MAXN][MAXN];
char get(int n,int x,int y,int r)
{
	if(r==1) return a[y][n-x+1];
	if(r==2) return a[n-x+1][n-y+1];
	if(r==3) return a[n-y+1][x];
	return a[x][y];
}
int main()
{
	int t,n,m,cnt,x,y;
	char op[5];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int i;
		for(i=1;i<=n;i++)
		{
			scanf("%s",a[i]+1);
		}
		scanf("%d",&m);
		cnt=0;
		while(m--)
		{
			scanf("%s",op);
			if(op[0]=='R') ++cnt;
			else
			{
				scanf("%d%d",&x,&y);
            	printf("%c\n",get(n,x,y,cnt%4));
			} 
		}
		if(t) printf("\n");
	}
	return 0;
}
