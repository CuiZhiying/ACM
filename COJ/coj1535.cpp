#include <iostream>
#include <cstring>
using namespace std;

//还应该考虑一下“我”在这个否决投票中起到的作用 
typedef struct node{
	int calo;
	string name;
}Pizza;

int main()
{
	int n,p;
	while(cin>>n>>p)
	{
		Pizza P[n];
		for(int i=0;i<n;i++)
		{
			cin>>P[i].calo>>P[i].name;
		}
		int cmax=(n+1)/3;
		int cmin=n/3;
		int count1=0,count2=0;
		for(int i=0;i<n;i++)
		{
			if(P[i].calo>=P[p].calo)
			{
				count1++;
			}
			else if(P[i].calo<=P[p].calo)
			{
				count2++;
			}
		}
		if(cmax<count1&&cmin<count2)
		{
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
