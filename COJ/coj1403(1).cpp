#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float area3(float x1,float y1,float z1,float x2,float y2,float z2,float x3,float y3,float z3)
{
	float a,b,c,p,s;
	a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
	b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)+(z1-z3)*(z1-z3));
	c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2)+(z3-z2)*(z3-z2));
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		float x1,x2,x3,y1,y2,y3,z1,z2,z3;
		cin>>x1>>y1>>z1;
		cin>>x2>>y2>>z2;
		cin>>x3>>y3>>z3;
		cout<<fixed<<setprecision(7)<<area3(x1,y1,z1,x2,y2,z2,x3,y3,z3)<<endl;
	}
	return 0;
}
