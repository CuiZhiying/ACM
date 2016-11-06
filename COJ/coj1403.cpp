#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		double a[3],b[3],c[3];
		double s;
		cin>>a[0]>>a[1]>>a[2];
		cin>>b[0]>>b[1]>>b[2];
		cin>>c[0]>>c[1]>>c[2];
		double e1[3]={a[0]-b[0],a[1]-b[1],a[2]-b[2]};
		double e2[3]={a[0]-c[0],a[1]-c[1],a[2]-c[2]};
		double e3[3]={b[0]-c[0],b[1]-c[1],b[2]-c[2]};
		double a0=sqrt(e1[0]*e1[0]+e1[1]*e1[1]+e1[2]*e1[2]);
		double b0=sqrt(e2[0]*e2[0]+e2[1]*e2[1]+e2[2]*e2[2]);
		double c0=sqrt(e3[0]*e3[0]+e3[1]*e3[1]+e3[2]*e3[2]);
		double p = (a0+b0+c0)/2;
		s=sqrt(p*(p-a0)*(p-b0)*(p-c0));
		cout<<s<<endl;
	}
	return 0;
}
