#include <iostream>
#include <cmath>
#include <iomanip>
#define MAXN 1005
using namespace std;
typedef struct{
	double x;
	double w;
}R;
R river[MAXN];

double plan1(double N,double x,double y,double c1,double c2)
{
	double d_s=sqrt(x*x+y*y);
	cout<<d_s<<endl;
	double dr=0,P;
	for(int i=1;i<=N;i++)
	{
		dr+=river[i].w*d_s/x;
	}
    cout<<dr<<endl;	
	P=dr*c2+(d_s-dr)*c1;
	cout<<P<<endl;
	return P;
} 

double plan2(double N,double x,double y,double c1,double c2)
{
	double theta=y/x;
	double dr=0,P;
	for(int i=0;i<N;i++)
	{
		dr+=river[i].w;
	}
	double h=theta*river[1].x;
	double dl=sqrt(h*h+river[1].x*river[1].x);
	int j;
	for(j=2;j<=N;j++)
	{
		h=theta*river[j].x-h;
		dl+=sqrt(h*h+(river[j].x-river[j-1].x+river[j-1].w)*(river[j].x-river[j-1].x+river[j-1].w));
		h=theta*river[j].x;
	}
	dl+=sqrt((x-river[j].x+river[j].w)*(x-river[j].x+river[j].w)+(y-h)*(y-h));
	P=dr*c2+dl*c1;
	cout<<P<<endl;
	return P;
}
int main()
{
	double N,x,y,c1,c2;
	while(cin>>N>>x>>y>>c1>>c2)
	{
		double P;
		for(int i=1;i<=N;i++)
		{
			cin>>river[i].x>>river[i].w;
		}
		double p1=plan1(N,x,y,c1,c2);
		double p2=plan2(N,x,y,c1,c2);
		P=p1<p2?p1:p2;
		cout<<fixed<<setprecision(2)<<P<<endl;
	}
	return 0;
}
