#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int ji=0,ou=0;
		char num[102],num0[102];
		cin>>num;
		int l=strlen(num);
		for(int j=0;j<l;j++)
		{
			num0[j]=num[l-j-1]-'0';
			if(j%2==0)
			{
				ji+=(int)num0[j];
			}
			else ou+=(int)num0[j];
		}
		int divi=ji-ou;
		if(divi%11==0)
		{
			cout<<"Yes"<<endl;
		}
		else cout<<"No"<<endl;
	}
	return 0;
} 
