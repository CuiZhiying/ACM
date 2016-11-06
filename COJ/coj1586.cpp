#include <iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int C,n;
		cin>>C>>n;
		int a[n];
		int count=1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int max=a[0];
		for(int j=1;j<n;j++)
		{
			if(max<a[j])
			{
				max=a[j];count=1;
			}
			else if(max==a[j])
			{
				count++;
			}
		}
		cout<<C/count<<endl;
	}
	return 0;
}
