#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int N[1005];
int adj(int l,int dig,int k)
{
	int maxd=dig;
	int s=min(dig+k,l);
	for(int i=dig;i<=s;i++)
	{
		if(N[maxd]<N[i]) maxd=i;
	}
	N[0]=N[maxd];
	for(int j=maxd;j>dig;j--)
	{
		N[j]=N[j-1];
	}
	N[dig]=N[0];
	return maxd-dig;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int k;
		cin>>k;
		string num;
		cin>>num;
		int l = num.length();
		for(int i=1;i<=l;i++)
		{
			N[i] = num[i-1]-48;
		}
		int dig=1;
		while(k>0&&dig<=l)
		{
			k-=adj(l,dig,k);
			dig++;
		}
		for(int i=1;i<=l;i++)
		{
			cout<<N[i];
		}
		cout<<endl;
	}
	return 0;
} 
