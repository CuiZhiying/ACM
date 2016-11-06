#include <iostream>
#define MAXN 100000
using namespace std;

int main()
{
	int T;
	int a[MAXN+2],b[MAXN+2];
	while(cin>>T)
	{
		int i,j,k;
	    for(i=0;i<T;i++)
	    {
	    	cin>>a[i];
	    }
	    for(i=0;i<T;i++)
	    {
	    	cin>>b[i];
		}
		for (i=j=k=0;k<T-1;++k)
		{
			if(a[i]<b[j]) ++i;
            else ++j;
		}    
        if(a[i]<b[j]) cout<<a[i]<<endl;
		else cout<<b[j]<<endl;
	}
	return 0;
}
