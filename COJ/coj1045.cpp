#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int R,G,B,Grayscale;
		cin>>R>>G>>B;
		Grayscale = floor(R*0.299 + G*0.587 + B*0.114);
		cout<<Grayscale<<endl;
	}
	return 0;
}
