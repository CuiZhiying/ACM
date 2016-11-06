#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int T;
	float x,y,z;
	float result;
	cin>>T;
	while(T--)
	{
	    cin>>x>>y>>z;
		result =ceil((x-(x+y)/3)/((x+y)/3)*z);
		cout<<result<<endl;	
	} 
	return 0;
}
