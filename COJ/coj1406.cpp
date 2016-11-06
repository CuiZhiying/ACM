#include <iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		float H,M,B;
		cin>>M>>H;
		B=M/(H*H);
		if(B<18.5)
		{
			cout<<"Underweight"<<endl;
		}
		else if(B<23&&B>=18.5)
		{
			cout<<"Normal"<<endl;
		}
		else if(B>=23)
		{
			cout<<"Overweight"<<endl;
		}
	}
	return 0;
}
