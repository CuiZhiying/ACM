#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
double find(double s[],int n)
{
	int loc;
	double max=-1.0;
	for(int i=0;i<n;i++)
	{
		if(s[i]>max)
		{
			max=s[i];
			loc=i;
		}
	}
	s[loc]=-1;
	return max;
}
int main()
{
	int N;
	while(cin>>N)
	{
		double score[N];
		for(int i=0;i<N;i++)
		{
			cin>>score[i];
		}
		double maxx=0.0,maxc=0.0,maxv=0.0;
		maxx=find(score,N);
		maxc=find(score,N);
		maxv=find(score,N);
		cout<<fixed<<setprecision(2)<<maxx<<" "<<maxc<<" "<<maxv<<endl;
	}
	return 0;
} 
