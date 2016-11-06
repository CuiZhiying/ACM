#include <iostream>

using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int p,key,c;
		cin>>p>>key;
		c=(p*key)%10000;
		if(c>=1000)
		{
			cout<<c<<endl;
		}
		else if(c>=100&&c<1000)
		{
			cout<<"0"<<c<<endl;
		}
		else if(c>=10&&c<100)
		{
			cout<<"00"<<c<<endl;
		}
		else if(c<10&&c>=0)
		{
			cout<<"000"<<c<<endl;
		}
	}
	return 0;
}
