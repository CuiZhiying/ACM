#include <iostream>
using namespace std;
#define MAXN 10001
int main()
{
	int T;
	while(cin>>T)
	{
		long long a[MAXN][2];
		for(int i=0;i<T;i++)
		{
			cin>>a[i][0]>>a[i][1];
		}
		for(int exchange=0,j=0;j<T-1;j++)
		{
			for(int k=0;k<T-1;k++)
			{
				if(a[k][0]>a[k+1][0])
				{
					long long temp[1][2];
					temp[0][0] = a[k+1][0];
					temp[0][1]=a[k+1][1];
					a[k+1][0]=a[k][0];
					a[k+1][1]=a[k][1];
					a[k][0]=temp[0][0];
					a[k][1]=temp[0][1];
					exchange=1;
				}
			}
			if(exchange==0)
			{
				return 0;
			}
		}
		for(int i=0;i<T;i++)
		{
			cout<<a[i][0]<<" "<<a[i][1]<<endl;
		}
	}
	return 0;
}
