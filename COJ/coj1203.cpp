#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		stack <int> s1,s2;
		int n,sum=0;
		int count=0;
		cin>>n;
		while(n--)
		{
			int num;
			cin>>num;
			s1.push(num);
			sum+=num;
		}
		int flag;
		while(!s1.empty())
		{
			if(s1.top()>(sum-s1.top())&&flag==1)
		    {
			    s2.push(s1.top());
			    sum-=s1.top();
			    s1.pop();
			    count++;
		    }
		    else
		    {
		    	if(!s2.empty()&&flag==0)
		    	{
		    		s2.top()+=s1.top();
		    		sum-=s1.top();
		    		s1.pop();
				}
				else
				{
					s2.push(s1.top());
					sum-=s1.top();
					s1.pop();
					count++;
				}
			}
			if(s2.top()>sum) flag=1;
			else flag=0;
		}
		cout<<count<<endl;
	}
	return 0;
}
