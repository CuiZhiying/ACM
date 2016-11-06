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
		int n,cot=1;
		cin>>n;
		while(n>3)
		{
			cot++;
			if(n%3==0) n/=3;
			else n=n/3+1;
		}
		if(n==1) cot=0;
		cout<<cot<<endl;
	}
	return 0;
}
