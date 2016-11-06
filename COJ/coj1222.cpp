#include <iostream>
#include <cmath>

using namespace std;
typedef long long LL;
typedef struct{
	int x;
	int y;
}FOOD;
int main()
{
	int n;
	while(cin>>n)
	{
		FOOD food[n+1];
		LL sum=0;
		cin>>food[0].x>>food[0].y;
		for(int i=1;i<=n;i++)
		{
			cin>>food[i].x>>food[i].y;
			sum+=abs(food[i].x-food[i-1].x);
			sum+=abs(food[i].y-food[i-1].y);
		}
		cout<<sum<<endl;
	}
	return 0;
}
