#include <iostream>
using namespace std;
int febi(int n)
{
	int x,y,z;
	x=1;y=1;
	z=2;
	if(n==0||n==1)
	{
		return 1;
	}
	for(int i=1;i<n;i++)
	{
		z=x+y;
		x=y;
		y=z;
	}
	return z;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int count;
		count = febi(n);
		cout<<count<<endl;
	}
	return 0;
}
