#include <iostream>

using namespace std;
int main()
{
	long long a,b;
	while(cin>>a>>b)
	{
		while(a!=b)
		{
			if(a>b)
			{
				a=a/2;
			}
			else
			{
				b=b/2;
			}
		}
		cout<<a<<endl;
	}
	return 0;
}
