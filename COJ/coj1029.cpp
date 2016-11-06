#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
int main()
{
	string str;
	int T;
	cin>>T;
	while(T--)
	{
		int flag=1;
		cin>>str;
		stack <char> p;
		int i;
		for(i=0;i<str.length();i++)
		{
			p.push(str[i]);
		}
		for(i=0;i<str.length();i++)
		{
			if(str[i]!=p.top()) 
			{
				flag=0;
				break;
			}
			else
			{
				p.pop();
			}
		}
		if(flag==0)
		{
		    cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
