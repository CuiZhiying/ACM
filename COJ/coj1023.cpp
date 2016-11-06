#include <iostream>
#include <cstring>
#include <cmath>
#define MAXN 305
using namespace std;
int L[MAXN];
int Min(int a,int b)
{
	return a<b?a:b;
}
bool judge(int mid,int m,int n)
{
	int sum=0,count=1;
	for(int i=1;i<=m;i++)
	{
		if(L[i]>mid) return false;
		if(sum+L[i]<=mid){
			sum+=L[i];
		}
		else{
			sum=L[i];
			count++;
		}	
    }
	return count<=n;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int m,n,i,min=1001;
		cin>>m>>n;
		int max=300*1000+5;
		memset(L,0,sizeof(L));
		for(i=1;i<=m;i++)
		{
			cin>>L[i];
			
			if(L[i]<min) min=L[i];
		}
		int mid,ans=max;
		while(min<=max)
		{
			mid=(min+max)/2;
			if(judge(mid,m,n)){
				ans=Min(ans,mid); 
				max=mid-1;
			}
			else{
				min=mid+1;
			} 
			
		}
		cout<<ans<<endl;
	}
	return 0;
}

