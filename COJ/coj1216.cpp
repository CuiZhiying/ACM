#include <iostream>
#include <cstring>
#include <cmath>
#define MAXN 10005;

using namespace std;

int main()
{
	int n;
	cin>>n;
	int num[n];
	int max=-1;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int t;
			t=num[i] ^ num[j];
			cout<<t<<endl;
			if(t>max) max=t;
		}
	}
	cout<<max<<endl;
	return 0;
}
