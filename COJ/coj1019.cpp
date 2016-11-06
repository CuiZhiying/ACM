#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		int m=str.length();
		bool s[m];
		int loc=0,j;
		memset(s,true,sizeof(s));
		for(j=m-1;j>=0;j--)
		{
			if(str[j]=='#')
			{
				s[j]=false;
				s[--j]=false;
			}
			else if(str[j]=='@')
			{
				loc=j+1;
				break;
			}
		}
		for(int k=loc;k<m;k++)
		{
			if(s[k])
			{
				cout<<str[k];
			}
		}
		cout<<endl;
	}
	return 0;
}
