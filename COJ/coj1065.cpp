#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct node{
	int a,b;
}p[100008];

bool cmp(node p,node q)
{
	if(q.b == p.b) return (p.a<q.a);
	else return (p.b<q.b);
}
int main()
{
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>p[i].a>>p[i].b;
	} 
	sort(p,p+N,cmp);
	int j=0,ans=1;
	for(int i=1;i<N;i++)
	{
		if(p[i].a-1>=p[j].b)
		{
			j=i;
			ans++;
		}
	}
	cout<<ans<<endl; 
	return 0; 
} 
