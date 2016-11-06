#include <iostream> 
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m,demand;
		cin>>n>>m>>demand;
		int a[n+1][m+1];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			    cin>>a[i][j];
		}
		if(demand==1)
		{
			for(int i=0;i<m;i++)
			{
				for(int j=n-1;j>0;j--)
			    {
			    	cout<<a[j][i]<<" ";
				}
				cout<<a[0][i]<<endl;
			}
		}
		else if(demand==2)
		{
			for(int j=m-1;j>=0;j--)
            {
			    for(int i=0;i<n-1;i++)
			    {
			    	cout<<a[i][j]<<" ";
				}
				cout<<a[n-1][j]<<endl;
			}
		}
	}
	return 0;
}
