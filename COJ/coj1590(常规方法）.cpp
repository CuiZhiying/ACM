#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int count=0;
		string str;
		cin>>str;
		for(int i=0;i<str.length()-3;i++)
		{
			if(str[i]=='a'&&str[i+1]=='l'&&str[i+2]=='p'&&str[i+3]=='c')
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
