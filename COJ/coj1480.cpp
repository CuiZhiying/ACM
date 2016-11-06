#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	freopen("in.txt","r",stdin);
	int T,cot=1;
	scanf("%d",&T);
	while(T--)
	{
		int num[10][2]={0,0,1,0,2,0,3,0,4,0,5,0,6,0,7,0,8,0,9,0};
		int a,b;
		scanf("%d",&a);
		b=a;
		int n=log10(a)+1;
		int aw[n][2];
		int sum=1;
		for(int i=0;i<n;i++)
		{
			aw[i][0]=a%10;
			
			if(num[aw[i][0]][1]==0)
			{
				num[aw[i][0]][1]==1;
				aw[i][1]=0;
			}
			else aw[i][1]=1;
			if(aw[i][0]==0) aw[i][0]=10;
			a/=10;
		}
		for(int i=0;i<n;i++)
		{
			if(aw[i][1]==0)
			{
				for(int j=aw[i][0];j<=b/2;j+=10)
		    	{
				    if(b%j==0) sum++;
		    	}
			}	
		}
		printf("Case #");
		printf("%d",cot++);
		printf(": ");
		printf("%d\n",sum);
	}
	return 0;
} 
