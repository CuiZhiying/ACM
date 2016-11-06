#include <iostream>
using namespace std;
int main()
{
	long long a,b;
	while(cin>>a>>b)
	{
		long long c;
		if(a>=b)
		{
			c=a-b;
			cout<<c<<endl;
		}
		else
		{
			c=b-a;
			cout<<c<<endl;
		}
	}
	return 0;
}
