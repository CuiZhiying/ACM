#include <stdio.h>
#include <stdlib.h>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		scanf("%d",&n);
		int num[n];
		int i;
		for(i=0;i<n;i++)
		{
			scanf("%d",&num[i]);
		}
		int tec;
		scanf("%d",&tec);
		while(tec--)
		{
			int x;
			scanf("%d",&x);
			int count =0,j;
			for(j=0;j<n;j++)
			{
				if(num[j]%x==0)
				{
					count++;
				}
			}
			printf("%d\n",count);
		}
	}
	return 0;
}
