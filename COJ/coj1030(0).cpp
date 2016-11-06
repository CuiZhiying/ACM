#include <iostream>
#include <cmath>
using namespace std;

bool Isprime(int n)
{
	for(int i=2;i<=sqrt(n);i++) 
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n,k;
	cin>>n;
	while(n--)
	{
		int j=0,l=0;
	    cin>>k;
	    if(Isprime(k))
		{
			cout<<"0"<<endl;
		}
		else
		{
			for(int i=1;;i++)
		{
			if(Isprime(k-i))
			{
				j=k-i;
				break;
			}
		}
		for(int i=1;;i++)
		{
			if(Isprime(k+i))
			{
			    l=k+i;
				break;
			}
		}
		cout<<l-j<<endl;
		}
		 			
	} 
	return 0;
}
