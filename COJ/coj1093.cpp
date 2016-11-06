#include <iostream>
#include <memory.h>
#include <cstring>
#include <ctype.h>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int v[n][3];
		for(int i=0;i<n;i++)
		{
			string s;
			scanf("%s",&s);
			int l=s.length();
			int cot=1;
			int pre;
			if(!isupper(s[0]))
			{
				v[i][0]=0;
				pre=0;
			} 
			else
			{
				v[i][0]=1;
				pre=1;
			}
			 if(!isupper(s[l-1]))
			{
				v[i][1]=0;
			} 
			else
			{
				v[i][1]=1;
			}
			for(int j=1;j<l;j++)
			{
				if(!isupper(s[j])&&pre==1)
				{
					cot++;
					pre=0;
				}
				else if(!islower(s[j])&&pre==0)
				{
					cot++;
					pre=1;
				}
			}
			v[i][2]=cot;
		}
		int cot00=0,cot01=0,cot10=0,cot11=0,t=0;
		for(int i=0;i<n;i++)
		{
			if(v[i][0]==0&&v[i][1]==0) cot00++;
			else if(v[i][0]==0&&v[i][1]==1) cot01++;
			else if(v[i][0]==1&&v[i][1]==0) cot10++;
			else if(v[i][0]==1&&v[i][1]==1) cot11++;
			t+=v[i][2];
		}
		if(cot10>=cot01) t+=cot10-cot01;
		else if(cot01>cot10) t+=cot01-cot10-1;
		else if(cot11==0&&cot10==0&&cot01==0) t++;
		printf("%d\n",t);
	}
	return 0;
}
