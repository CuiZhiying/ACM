#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;
int eva[9]={-1,49,149,249,349,449,549,649,749};
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int len,level=0,exp=0;
		cin>>len;
		string days;
		cin>>days;
		int length=0;
		for(int i=0;i<len;i++)
		{
			if(days[i]=='1')
			{
				length++;
				exp+=10*length;
			}
			else
			{
				length=0;
			}
			if(length==5)
			{
				length=0;
			}
		}
		if(exp>=750) cout<<"8"<<endl;
		else{
			for(int i=0;i<8;i++)
			{
				if(exp>eva[i]&&exp<=eva[i+1])
				{
					cout<<i<<endl;
					break;
				}
			}
		}
	}
	return 0;
} 
