#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int T;
	while(cin>>T)
	{
		int food[T+2][2];
		for(int i=0;i<=T;i++)
		{
			cin>>food[i][0]>>food[i][1];
		}
		int d=0;
		for(int i=1;i<=T;i++)
		{
			d+=abs(food[i][0]-food[i-1][0])+abs(food[i][1]-food[i-1][1]);
		}
		cout<<d<<endl;
	}
	return 0;
}
