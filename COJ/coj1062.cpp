#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string str;
	while(cin>>str)
	{
		int count=0;
		int flag[4]={0,0,0,0};
		for(int i=0;i<str.length();i++)
		{
			if(str[i]>='a'&&str[i]<='z'&&flag[0]==0)
			{
				count++;
				flag[0]++;
			}
			else if(str[i]>='A'&&str[i]<='Z'&&flag[1]==0)
			{
				count++;
				flag[1]++;
			}
			else if(str[i]>='0'&&str[i]<='9'&&flag[2]==0)
			{
				count++;
				flag[2]++;
			}
			else if(flag[3]==0 &&(str[i]=='~'||str[i]=='!'||str[i]=='@'||str[i]=='#'||str[i]=='$'||str[i]=='%'||str[i]=='^'))
			{
				count++;
				flag[3]++;
			}
		}
		if(count>=3&&str.length()>=8)
		{
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
