#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
	string s,s1,s2;
	int N,M;
	while(cin>>N>>M)
	{
		int count1=0,count2=0;
		int s[N],s1[N+2],s2[N+2];
		for(int i=0;i<N;i++)
		{
			cin>>s[i];
		}
		int num[M];
		for(int i=0;i<M;i++)
		{
			cin>>num[i];
		}
		int v1,v2,cot=0;
		cout<<cot<<endl;
		for(int i=0;i<M;i++)
		{
			v1=i%2;
			v2=(v1+1)%2;
			cout<<v1<<" "<<v2<<endl;
			for(int j=0;j<num[M];j++)
			{
				s1[cot]=v1;
				s2[cot]=v2;
				cot=cot+1;
			}
			cout<<cot<<endl;
		}
		for(int i=0;i<N;i++)
		{
			if(s[i]!=s1[i]) count1++;
			if(s[i]!=s2[i]) count2++;
		}
		if(count1<count2) cout<<count1-1<<endl;
		else cout<<count2-1<<endl;
	} 
	return 0;
} 
