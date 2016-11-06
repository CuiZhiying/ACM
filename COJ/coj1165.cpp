#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
	freopen("in.txt","r",stdin);
	int la,lb,lc;
	while(cin>>la>>lb>>lc)
	{
		int i,j,k;
		long long A[la+2],B[lb+2],C[lc+2];
		for(i=0;i<la;i++)
		{
			cin>>A[i];
		}
		for(i=0;i<lb;i++)
		{
			cin>>B[i];
		}
		for(i=0;i<lc;i++)
		{
			cin>>C[i];
		}
		long long min=2000000000000000000;
		for(i=0;i<la;i++)
		{
			for(j=0;j<lb;j++)
		    {
		    	long long a=2,b=-2*(A[i]+B[j]),c=2*(A[i]*A[i])+2*(B[j]*B[j])-2*A[i]*B[j];
		    	cout<<a<<" "<<b<<" "<<c<<endl;
		    	long long pre=a*(C[0]*C[0])+b*C[0]+c;
		    	if(pre<min) min=pre;
		    	for(k=1;k<lc;k++)
		    	{
		    		long long v=a*(C[k]*C[k])+b*C[k]+c;
		    		if(v>pre) break;
		    		pre=v;
		    		if(v<min) min=v;
				}
			}
		}
        cout<<min<<endl;	        
	}
	return 0;
}
