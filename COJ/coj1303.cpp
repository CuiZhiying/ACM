#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

long long gcd(long long a,long long b)
{
	if(!b) return a;
	else return gcd(b,a%b);
}
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		string sn,sm;
		cin>>sn>>sm;
		int flag=0;
		long long M=0,N=0,H=0,K=1;
		for(int i=0;i<n;i++)
		{
			K*=10;
			if(flag==0&&sn[i]=='0') continue;
			else
			{
				flag=1;
			     N=N*10+(int)(sn[i]-48);
			 } 
		}
		flag=0;
		for(int j=0;j<m;j++)
		{
			M=M*10+9;
			if(flag==0&&sm[j]=='0') continue;
			else
			{
				flag=1;
				H=H*10+(int)(sm[j]-48);
			}
		}
		N=N*M+H;
		M*=K;
		long long d=gcd(N,M);
		cout<<N/d<<" "<<M/d<<endl;
	}
	return 0;
}
