#include <iostream>

using namespace std;

int main()
{
	int h1,m1,h2,m2;
	int count=1;
	while(cin>>h1>>m1>>h2>>m2)
	{
		int fee,time;
		cout<<"Day "<<count++<<": ";
		if(h1>h2||h1==h2&&m1>m2)
		{
			cout<<"Joking"<<endl;
		}
		else{
			fee=((h2-h1)*60+m2-m1+29)/30;
			if((((h2-h1)*60+m2-m1)%30)==0)
			{
				time=0;
			}
			else
			    time=30-((h2-h1)*60+m2-m1)%30;
			cout<<fee<<" "<<time<<endl;
		}
	}
	return 0;
} 
