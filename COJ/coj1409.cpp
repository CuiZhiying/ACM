#include <iostream>
#include <cmath>

using namespace std;
typedef struct{
	int x;
	int y;
	int size;
}BOUND;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m;
		long long sum=0;
		cin>>n;
		BOUND A[n];
		for(int i=0;i<n;i++)
		{
			cin>>A[i].x>>A[i].y;
			A[i].size=A[i].y-A[i].x+1;
			sum+=A[i].size;
		}
		cin>>m;
		BOUND B[m];
		for(int i=0;i<m;i++)
		{
			cin>>B[i].x>>B[i].y;
			B[i].size=B[i].y-B[i].x+1;
			sum+=B[i].size;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(A[i].x<=B[j].x&&A[i].y>=B[j].y) sum-=B[j].size;
				else if(B[j].x<=A[i].x&&B[j].y>=A[i].y) sum-=A[i].size;
				else if(A[i].x<=B[j].x&&A[i].y>=B[j].x&&A[i].y<B[j].y) sum-=B[j].size+A[i].size-(B[j].y-A[i].x+1);
				else if(B[j].x<=A[i].x&&B[j].y>=A[i].x&&B[j].y<A[i].y) sum-=A[i].size+B[j].size-(A[i].y-B[j].x+1);
				else if(B[j].x>A[i].y) break;
			}
		}
		cout<<sum<<endl;  
	}
	return 0;
}
