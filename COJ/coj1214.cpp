#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main()
{
	string str;
	while(cin>>str)
	{
		stack <char> s1,s2,s3;
		for(int i=0;i<str.length();i++)
		{
			switch(str[i])
			{
				case '1':
					s1.push(str[i]);
					break;
				case '2':
					s2.push(str[i]);
					break;
				case '3':
					s3.push(str[i]);
					break;
			}
		}
		while(!s2.empty())
		{
			cout<<s2.top();
			s2.pop();
		}
		while(!s1.empty())
		{
			cout<<s1.top();
			s1.pop();
		}
		while(!s3.empty())
		{
			cout<<s3.top();
			s3.pop();
		}
		cout<<endl;
	}
	return 0;
}
