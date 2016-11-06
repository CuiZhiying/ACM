#include <iostream>
#include <cstring>
#include <cmath>
#define MAXN 300
using namespace std;

int main()
{
	freopen("in.txt","r",stdin);
	char s1[MAXN],s2[MAXN],s3[MAXN],s4[MAXN];
	char a[MAXN],b[MAXN],c[MAXN],d[MAXN];
	bool f1[100],f2[MAXN];
	while(cin>>s1>>s2>>s3>>s4)
	{
	   	int l1=strlen(s1),l3=strlen(s3),l4=strlen(s4);
	   	memset(f1,false,sizeof(f1));
	   	memset(f2,false,sizeof(f2));
	   	for(int i=0;i<l1;i++) 
	   	{
	   		if(!f1[s1[i]-48]&&!f2[s2[i]-48])
	   		{
	   			a[s1[i]-48]=s2[i];
	   			b[s2[i]-48]=s1[i];
	   			f1[s1[i]-48]=true;
	   			f2[s2[i]-48]=true;
			}
			else if(f1[s1[i]-48]&&a[s1[i]-48]!=s2[i])
			{
				f1[s1[i]-48]=false;
			}
			else if(f2[s2[i]-48]&&b[s2[i]-48]!=s1[i])
			{
				f2[s2[i]-48]=false;
			}
		}
		bool flag=false;
		for(int i=0;i<l3;i++)
		{
			if(!f1[s3[i]-48])
			{
				flag=true;
				break;
			}
			else c[i]=a[s3[i]-48];
		}
		if(flag) cout<<"Wrong"<<endl;
		else 
		{
			for(int i=0;i<l3;i++) cout<<c[i];
			cout<<endl;
		}		
		flag=false;
		for(int i=0;i<l4;i++)
		{
			if(!f2[s4[i]-48])
			{
				flag=true;
				break;
			}
			else d[i]=b[s4[i]-48];
		}
		if(flag) cout<<"Wrong"<<endl;
		else 
		{
			for(int i=0;i<l4;i++) cout<<d[i];
			cout<<endl;
		}		
	}
	return 0;
}
