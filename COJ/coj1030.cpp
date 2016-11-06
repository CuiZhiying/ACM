#include <iostream>
#include <cmath>
#define MAXN 1299709
using namespace std;

bool Prime(long n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		long num;
		int M,m;
		cin>>num;
		if(Prime(num))
		{
			cout<<"0"<<endl;
		}
		else{
			for(long i=num;i<=MAXN;i++)
			{
				if(Prime(i))
				{
					M=i;
					break;
				}
			}
			for(long j=num;j>=2;j--)
			{
				if(Prime(j))
				{
					m=j;
					break;
				}
			}
			cout<<M-m<<endl;
		}
	 }
	 return 0; 
}
