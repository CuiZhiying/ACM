#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long L,a,b;
		cin>>L>>a>>b;
		if(L%2==1)
		{
			cout<<"0"<<endl;
		}
		else
		{
			long long maxn=L/4,minn=1;
	        long long l=0;
	        while(maxn>=minn)
	        {
	          	long long mid=(maxn+minn)/2;
	        	if(mid*(L/2-mid)<a)
	        	{
	        		l=max(l,mid);
	        		minn=mid+1;
		    	}
		    	else
		    	    maxn=mid-1;
	        }
	        long long r=0;
	        maxn=L/4,minn=1;
	        while(minn<=maxn)
	        {
	        	long long mid=(maxn+minn)/2;
	        	if(mid*(L/2-mid)<=b)
	        	{
	        		r=max(r,mid);
	        		minn=mid+1;
		    	}
		    	else
		    	{
		     		maxn=mid-1;
		    	}
	    	}
	    	cout<<r-l<<endl;
	    }
	}
	return 0;
}
