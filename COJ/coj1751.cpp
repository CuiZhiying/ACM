#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
struct node{
	int b;
	int e;
};
bool cmp(node a,node b)
{
	return a.b<b.b;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		node P[n];
		for(int i=0;i<n;i++)
		{
			cin>>P[i].b>>P[i].e;
		}
		sort(P,P+n,cmp);
		int count=1;
		int s=P[0].e;
		for(int i=1;i<n;i++)
		{
			if(P[i].b>s)
			{
				count++;
				s=P[i].e;
			 } 
			else{
				s=min(s,P[i].e);
			}
		}
		cout<<count<<endl;
	}
	return 0;
} 
