#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int m,n,a,k;
		double f;
		cin>>m>>a>>k;
		int d=k/2;
		int dpart=(1+d)*d*a;		
		f=(m-dpart)/(a*k)+d;
		n=ceil(f);
		cout<<n<<endl;
	}
	return 0;
}
