#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#define MAXN 4587525 
using namespace std;
int core[MAXN];
int N;
int groupch(int start,int end,int s)
{
	int maxpos=start,minpos=start;
	if(s>0)
	{
		for(int i=start;i<=end;i++)
	    {
	    	if(core[i]>core[maxpos]) maxpos=i;
    	}
	}
	else{
		for(int i=start;i<=end;i++)
		{
			if(core[i]<core[maxpos]) maxpos=i;
		}
	}
	int temp=core[maxpos];
	core[maxpos]+=s;
	core[maxpos]>N?core[maxpos]=N:(core[maxpos]<0?core[maxpos]=0:core[maxpos]=core[maxpos]);
	int n=core[maxpos]-temp;
	for(int i=start;i<=end;i++)
	{
		if(i==maxpos) continue;
		core[i]+=n;
		core[i]>N?core[i]=N:core[i]<0?core[i]=0:core[i]=core[i];
	}
	return n;
}
int main()
{
	int C,O;
	cin>>C>>N>>O;
	memset(core,0,sizeof(core));
	while(O--)
	{
		string opr;
		cin>>opr;
		if(opr=="state")
		{
			int a;
			cin>>a;
			cout<<core[a]<<endl;
		}
		else if(opr=="change")
		{
			int a,b,temp;
			cin>>a>>b;
			temp=core[a];
			core[a]+=b;
			core[a]>N?core[a]=N:core[a]<0?core[a]=0:core[a]=core[a];
			cout<<core[a]-temp<<endl;
		}
		else
		{
			int start,end,s;
			cin>>start>>end>>s;
			int n=groupch(start,end,s);
			cout<<n<<endl;
		}
	}
	return 0;
}
