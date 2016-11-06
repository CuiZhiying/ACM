#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long LL;
typedef struct{
	int x;
	int y;
}FOOD;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		FOOD food[n+1];
		LL sum=0;
		scanf("%d%d",&food[0].x,&food[0].y);
		for(int i=1;i<=n;i++)
		{
			scanf("%d%d",&food[i].x,&food[i].y);
			sum+=(LL)abs(food[i].x-food[i-1].x);
			sum+=(LL)abs(food[i].y-food[i-1].y);
		}
		printf("%lld\n",sum);
	}
	return 0;
}
