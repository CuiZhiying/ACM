#include <iostream>
#include <cstring>
#define MAXN 100002
using namespace std;

int main()  
{
	int acm[MAXN];
	int ac[7];	
	int T;
	cin>>T;
	while(T--)
	{
	    memset(acm,-1,MAXN);
		memset(ac,0,sizeof(ac));
		cin>>acm[0];
		for(int i=1;i<=acm[0];i++)
		{
			cin>>acm[i];
		}
		for(int j=1;j<=acm[0];j++)
		{
			if(acm[j]==0)
			{
				ac[0]=j;
				ac[1]++;
			}
			else if(acm[j]==2)
			{
			    ac[2]=j;
			    ac[3]++;
			}
			else if(acm[j]==5)
			{
				ac[4]++;
				ac[5]=j;
			}
		}
		if(ac[1]==0)
		{
			if(ac[3]==1)
			{
				cout<<ac[2]<<endl;
			}
			else{
				cout<<"No winner"<<endl;
			}
		}
		else if(ac[3]==0)
		{
			if(ac[4]==1)
			{
				cout<<ac[5]<<endl;
			}
			else{
				cout<<"No winner"<<endl;
			}
		}
		else if(ac[4]==0)
		{
			if(ac[1]==1)
			{
				cout<<ac[0]<<endl;
			}
			else{
				cout<<"No winner"<<endl;
			}
		}
		else{
			cout<<"No winner"<<endl;
		}
	}
	return 0;
}
