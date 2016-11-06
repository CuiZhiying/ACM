#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int a,b,d,e;
	while(cin>>a>>b>>d>>e)
	{
		string c;
		cin>>c;
		int ans=a*b%d;
		int i=e;
		for(;i<e+ans;i++)
		{
			cout<<c[i];
		}
		cout<<endl;
	}
	return 0;
} 
