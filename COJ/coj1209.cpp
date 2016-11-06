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
		long long a,b,c;
		cin>>a>>b>>c;
		long long q=hcf(a,hcf(b,c));
		cout<<q<<endl;
	}
	return 0;
}
