#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
struct node{
	int p;
	node *next[27];
}*r,*t;
using namespace std;

char name[1005][1005];
int t0;
int build(int k,int j,node *r)
{
	r->p++;
	int l=strlen(name[j])-1;
	if(k>=l) return 0;
	if(r->next[name[j][k]-'a']!=NULL)
	{
		build(k+1,j,r->next[name[j][k]-'a']);
	}
	else
	{
		for(int m=k;m<l;m++)
		{
			t=new node;
			t->p=1;
			for(int i=0;i<26;i++) t->next[i]=NULL;
			r->next[name[j][m]-'a']=t;
			r=t;
		}
	}
	return 0;
}
void search(int k,int i,node *h)
{
	t0++;
	int l=strlen(name[i])-1;
	if(k==l||h->p==1) return;
	search(k+1,i,h->next[name[i][k+1]-'a']);
}

void release(node *c)
{
	if(c==NULL) return;
	for(int i=0;i<26;i++)
	{
		if(c->next[i])
		{
			release(c->next[i]);
			c->next[i]=NULL;
		}
	}
	free(c);
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		r=new node;
		r->p=0;
		for(int i=0;i<26;i++)
		{
			r->next[i]=NULL;
		}
		for(int j=0;j<n;j++)
		{
			cin>>name[j];
			build(0,j,r);
		}
		int sum=0;
		for(int i=0;i<n;i++)
		{
			t0=0;
			search(0,i,r->next[name[i][0]-'a']);
			sum+=t0;
		}
		release (r);
		cout<<sum<<endl;
	}
	return 0;
} 
