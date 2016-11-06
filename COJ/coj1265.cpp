#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double N[11]={1,2,3,4,5,6,5,4,3,2,1};
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int S;
		cin>>S;
		double res=N[S-2]/36.0;
		cout<<fixed<<setprecision(6)<<res<<endl<<endl;
	}
	return 0;
} 
