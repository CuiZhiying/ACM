#include <iostream>
#include <cmath>
using namespace std;

long long _abs(long long n)
{
	if(n<0) return ~(--n);
	return n;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long a,b,c;
		scanf("%lld %lld %lld",&a,&b,&c);
		unsigned long long sum,C;
		int judge=1,jc;
		c<0?jc=0:jc=1;
		C=abs(c); 
		long long A,B;
		A=_abs(a);B=_abs(b);
		if(a<0&&b<0)
		{
			judge=0;sum=A+B;
		}
		else if(a<0&&A>b)
		{
		    judge=0;sum=A-b;
		}
		else if(b<0&&B>a)
		{
			judge=0;sum=B-a;
		}
		else sum=a+b;
		if(judge==0)
		{
			if(jc==0)
			{
				if(sum>C) cout<<"<"<<endl;
		    	else if(sum==C) cout<<"="<<endl;
		    	else cout<<">"<<endl;
			}
			else
			{
				cout<<"<"<<endl;
			}
		}
		else
		{
			if(jc==0)
			{
				cout<<">"<<endl;
			}
			else
			{
				if(sum>C) cout<<">"<<endl;
		    	else if(sum==C) cout<<"="<<endl;
		    	else cout<<"<"<<endl;
			}
		}
	
	}
	return 0;
}
