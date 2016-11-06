#include <iostream>

using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,ans=1;
		cin>>n;
		int num[n];
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		for(int j=n-2;j>=0;j--)
		{
			if(num[j]<num[j+1]) ans++;
			else break; 
		}
		cout<<n-ans<<endl;
	}
	return 0;
}
