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
		for(;e<e+ans+1;e++)
		{
			cout<<s[e];
		}
		cout<<endl;
	}
	return 0;
} 
