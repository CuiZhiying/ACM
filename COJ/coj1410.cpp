#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long x,y,sum=0;
		scanf("%lld %lld",&x,&y);
		if(x==y) {printf("0\n"); continue;}
		while(y/2>=x)
		{
			if(y%2==0) sum+=1;
			else sum+=2;
			y/=2;
		}
		sum+=y-x;
		printf("%lld\n",sum);
	}
	return 0;
}
