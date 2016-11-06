#include <iostream>
#include <iomanip>
using namespace std;

double pij[105][15];

int main()
{
	int m,n;
	while(cin>>n>>m&&(m!=0||n!=0))
	{
		for(int i=0;i<n;i++)
		    for(int j=1;j<=m;j++)
		        cin>>pij[i][j];
		for(int i=1;i<=m;i++)
		    for(int j=0;j<n;j++)
			    for(int k=j;k<n;k++)
				{
					if(pij[k][i]>pij[j][i])
					{
						double temp=pij[j][i];
						pij[j][i]=pij[k][i];
						pij[k][i]=temp;
					}
				}
		double sum=0;
		for(int i=0;i<n;i++)
		{
			pij[i][0]=1.0;
			for(int j=1;j<=m;j++)
			{
				pij[i][0]*=pij[i][j];
			}
			sum+=pij[i][0];
		}
		cout<<fixed<<setprecision(4)<<sum<<endl;           
	}
	return 0;
}
