#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
	int t;
	int T[10]={1,1,4,4,2,1,1,4,4,2};
	cin>>t;
	while(t--)
	{
		int n,k,i;
		cin>>n>>k;
		int sum1=0,sum=0;
		for(i=0;i<10;i++)
		{
			int d;
			if(k<=T[i]) d=k;
			else d=(k-1)%T[i]+1;
			sum1+=(int(pow(i,d+0.0)))%10;
		}
		sum1=sum1%10;
		sum+=sum1*(n/10);
		n=n%10;
		for(i=1;i<=n;i++)
		{
			int d;
			if(k<=T[i]) d=k;
			else d=(k-1)%T[i]+1;
			sum+=(int(pow(i,d+0.0)))%10;
		}
		cout<<sum%10<<endl;
	}
	return 0;
}
