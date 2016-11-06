#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int count=0;
		string str1,str2;
		cin>>str1>>str2;
f1:		for(int i=0;i<str1.length()-str2.length()+1;i++)
		{
			for(int j=0;j<str2.length();j++)
			{
				if(str1[i+j]==str2[j])
				{
					if(j==str2.length()-1)
					{
						count++;
					}
				}
				else
				{
					break;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
