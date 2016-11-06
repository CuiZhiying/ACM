#include <iostream> 
#include <cmath>

using namespace std;
int main()
{
	int L,k;
	while(cin>>L>>k)
	{
		int seq[L+1];
		int maxn=1;
		for(int i=0;i<L;i++)
		{
			cin>>seq[i];
		}
		int max=0,min=0,s=0;
		for(int j=0;j<L;j++)
		{		
a:			if(abs(seq[max]-seq[j])<=k&&abs(seq[j]-seq[min]<=k))
			{
				s++;
			}
			if(s>maxn) maxn=s;
			else if(abs(seq[max]-seq[j])>k){
				s=0;j=max+1;max=j;min=j;goto a;
			}
			else if(abs(seq[j]-seq[min])>k){
				s=0;j=min+1;max=j;min=j;goto a;
			}
			if(seq[j]>seq[max]) max=j;
			if(seq[j]<seq[min]) min=j;
			
		}
		cout<<maxn<<endl;
	} 
	return 0;
}
