#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int x,y,z;
		cin>>x>>y>>z;
		if(x==y||x==z||y==z)
		{
			cout<<"Yes"<<endl;
		}
		else if(abs(x-y)%3==0||abs(x-z)%3==0||abs(y-z)%3==0)
		{
			cout<<"Yes"<<endl;
    	}
		else
		{
		    cout<<"No"<<endl;	
		}	
	}
	return 0;
}
