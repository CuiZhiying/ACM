#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		double a,b,c,d;
		cin>>a>>b>>d;
		c=a+b-d;
        double f= c/10;
		if(b>d) {
			cout<<"IMPOSSIBLE"<<endl;
		} 
		else {
			if(c<0) cout<<"0.00"<<endl;
	    	else if(c>=3600) cout<<"IMPOSSIBLE"<<endl;
	    	else cout<<fixed<<setprecision(2)<<f<<endl;
		}
	}
	return 0;
}
