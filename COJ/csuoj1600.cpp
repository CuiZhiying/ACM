#include <iostream>
#include <cstring>
#include <cmath>
#define eps 1e-5
using namespace std;
double num[5];

bool df(double value,int visit[],int n)
{
	if(n==1) 
	{
		return fabs(value-24)<eps;
	}
	int v[5];
	for(int i=1;i<5;i++)
	{
		v[i]=visit[i];
	}
	double c; 
	for(int i=1;i<5;i++)
	{ 
		if(v[i]==0)
		{
			v[i]=1;
			if(value!=0)
			{
				c=num[i]/value;
				if(df(c,v,n-1)) return true;
			}
			if(num[i]!=0)
			{
				c=value/num[i];
				if(df(c,v,n-1)) return true;
			}
			c=value+num[i];
			if(df(c,v,n-1)) return true;
			c=fabs(value-num[i]);
			if(df(c,v,n-1)) return true;
			c=value*num[i];
			if(df(c,v,n-1)) return true;
			v[i]=0;
		}	
	}
	return false;
}

int main()
{
	int a,b,c,d; 
	while(cin>>a>>b>>c>>d)
	{
		num[1]=a;num[2]=b;num[3]=c;num[4]=d;
		int visit[5];
		memset(visit,0,sizeof(visit));
		bool flag=false;
		for(int i=1;i<5;i++)
		{
			double value;
			value=num[i];
			visit[i]=1;
			if(df(value,visit,4))
	    	{
		    	flag=true;
	    	}
			visit[i]=0;	
		}
		if(flag) cout<<"Yes"<<endl;	
		else cout<<"No"<<endl;
	}
	return 0;
} 
