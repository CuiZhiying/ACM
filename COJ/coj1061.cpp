#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int N;
	cin>>N;
	stack <int> S1,S2,S;
	while(N--)
	{
		int m,n;
		cin>>m>>n;
		S1.push(m);
		S2.push(n);
	}
	int temp=0;
	while(!S1.empty())
	{
		if((S1.top()+S2.top()+temp)<10)
		{
			S.push(S1.top()+S2.top()+temp);
			temp=0;
		}
		else
		{
			S.push(S1.top()+S2.top()+temp-10);
			temp=1;
		}
		S1.pop();
		S2.pop();
	}
	while(!S.empty())
	{
		cout<<S.top();
		S.pop();
	}
	cout<<endl;
	return 0;
}
