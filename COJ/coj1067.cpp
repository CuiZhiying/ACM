#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string str;
	while(cin>>str)
	{
		int count=1,max=0;
		int l=str.length();
		for(int i=1;i<l;i++)
		{
			if(str[i-1]==str[i])
			{
				count++;
			}
			else
			{
				if(count>max)
				{
					max=count;
				}
				count=1;
			}
		}
		if(count>max)
		{
			max=count;
		}
		cout<<max<<endl;
	}
	return 0;
}
