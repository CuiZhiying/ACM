#include <iostream>
#include <iomanip>
using namespace std;

double p[110][3];
int main()
{
	int n,m,x,t=0;
	while(cin>>m>>n)
	{
		p[1][0]=p[1][1]=p[1][2]=0;
		for(int i=0;i<m;i++)
		{
			cin>>x;
			p[1][x%3]+=1;
		}
		p[1][0]/=m,p[1][1]/=m,p[1][2]/=m;
		for(int i=2;i<=n;i++)
		{
			for(int j=0;j<3;j++)
			{
				p[i][j]=p[i-1][0]*p[1][j]+p[i-1][1]*p[1][(j+2)%3]+p[i-1][2]*p[1][(j+1)%3];
			}
		}
		cout<<"Case "<<++t<<": "<<fixed<<setprecision(8)<<p[n][0]<<endl;
	}
	return 0;
}
