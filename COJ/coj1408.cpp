#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,dis;
		cin>>n>>dis;
		int tree[n];
		for(int i=0;i<n;i++)
		{
			cin>>tree[i];
		}
		int count=1,j=0,k=1;
		while(k!=n)
		{
			if(tree[k]-tree[j]>=dis)
			{
				j=k;
				k++;
				count++;
			}
			else
			{
				k++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
