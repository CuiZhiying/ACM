#include <iostream>
using namespace std;

long long hcf(long long a,long long b)
{
	long long r=0;
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		long long a,b;
		cin>>n>>a>>b;
		if(a%2==1||b%2==1)
		{
			cout<<n<<endl;
		}
		else
		{
			long long c = hcf(a,b);
			int count=0;
			while(c!=1)
			{
				count++;
				c/=2;
			}
			cout<<n-count<<endl;
		}
	}
	return 0;
}
