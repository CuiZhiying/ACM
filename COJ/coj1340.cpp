#include <iostream>

using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		bool flag=false;
		int num;
		cin>>num;
		while(num!=0)
		{
			if((num%10)==7)
		    {
			    flag=true;
		    }
		    num=num/10;
		}
		if(flag)
		{
			cout<<"Lucky"<<endl;
		}
		else
		{
			cout<<"Unlucky"<<endl;
		}
	}
	return 0;
}
