#include <iostream>

using namespace std;

int judge(int m)
{
	if(m%7==0)
	{
		return 1; 
	}
	while(m!=0)
	{
		if(m%10==7) return 1;
		m/=10;
	}
	return 0;
}
int main()
{
	int n,m,k;
	while(cin>>n>>m>>k && (n!=0 || m!=0 || k!=0))
	{
        int count =0;
		if(m==n||m==1)
		{
			
			int flag=0;
			while(count!=k)
			{	
				if(flag==0)
				{
					count+=judge(m);
					flag=1;
				}
				else
				{
				    m=m+2*n-2;
					count+=judge(m);
				}
				
			}
			cout<<m<<endl;
		}
		else
		{
			int t=n-m;
	    	int d=m-1;
			int flag=0;
			int num=1;
			while(count!=k)
			{	
				if(flag==0)
				{
					count+=judge(m);
					flag =1;
					num++;
				}
				else 
				{
				    if(num%2==0)
				    {
				    	m=m+2*t;
				    	count+=judge(m);
				    	num++;
					}
					else
					{
						m=m+2*d;
						count+=judge(m);
						num++;
					}
				}
	    	}
	    	cout<<m<<endl;
		}
	}
	return 0;
} 
