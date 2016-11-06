#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	 int bmw[3];
	 string str;
	 while(cin>>str)
	 {
	 	memset(bmw,0,sizeof(bmw));
	 	int i=0;
	 	for(;i<str.length();i++)
	 	{
		    if(str[i]=='b'||str[i]=='B')
			{
			    bmw[0]++;	
			}
			if(str[i]=='m'||str[i]=='M')
			{
			    bmw[1]++;	
			}
			if(str[i]=='w'||str[i]=='W')
			{
			    bmw[2]++;	
			}	
		}
		cout<<min(bmw[0],min(bmw[1],bmw[2]))<<endl;
	 }
}
