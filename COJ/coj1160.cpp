#include <iostream>
#include <memory.h>
using namespace std;
long long ox[8];

int cal(long long x,int T[])
{
    if(x<16)
	{
		T[0]++;
		T[8]=x;
		return 0;
	}
	for(int i=0,a=1;i<8;i++,a++)
	{
		if(ox[i]<=x)
		{
			T[a]= x/ox[i];
			T[0]++;
			x = x%ox[i];		
		}
	}
	
	return 0;
}
int main()
{
	ox[7]=1;
	for(int i=6;i>=0;i--)
    {
    	ox[i]=16*ox[i+1];
    }
	long long x;
	while(cin>>x)
	{
		int T[9];
        memset(T,0,sizeof(T));
		cal(x,T);
		cout<<"0x";
    	for(int i=1;i<9;i++)
    	{
     		if(T[i]<16&&T[i]>9)
    		{
    			char a;
    			a=(char)(T[i]+55);
     			cout<<a;
    		}
    		else
    		{
    			cout<<T[i];
    		}
    	}
    	cout<<endl;
	}
	return 0;
	
}
