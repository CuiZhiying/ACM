#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;
typedef struct{
	double d;
	double h;
}Type;

int main()
{
	int N,M;
	while(cin>>N>>M)
	{
		Type L[N+5],Y[M+5];
		for(int i=0;i<N;i++)
		{
			cin>>L[i].d>>L[i].h;
		}
		for(int i=0;i<M;i++)
		{
			cin>>Y[i].d>>Y[i].h;
	    }
		int ans=N;
		int visit[M];
		memset(visit,0,sizeof(visit));
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<M;j++)
			{
			    double h=L[i].h*Y[j].d/L[i].d;
			if(L[i].d>Y[j].d&&h<Y[j].h&&visit[j]==0)
				{
					ans--;
					visit[j]=1;
					break;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
