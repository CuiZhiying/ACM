#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int t,n,a,b;
	bool ok;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ok=false;
		for(a=0;a*a*2<=n;a++)
		{
			b=(int)sqrt(n-a*a+0.5);
			if(a*a+b*b==n)
			{
				ok=true;
				break;
			}
		}
		if(ok) cout<<a<<" "<<b<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}
