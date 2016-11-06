#include <iostream>
#include <queue>
using namespace std;

int main()
 {
 	int M,N;
 	while(cin>>M>>N)
 	{
 		queue <int> S;
 		int a,b,c,d,count=0;
        for(a=M;a<=N;a++)
        {
            b=a/100;
            c=a%100/10;
            d=a%100%10;
            if(a==b*b*b+c*c*c+d*d*d)
            {
            	S.push(a);
            }
    	}
    	if(S.empty())
    	{
    		cout<<"no";
		}
		while(!S.empty())
		{
			if(S.size()==1)
			{
				cout<<S.front();
				S.pop();
			}
			else
			{
				cout<<S.front()<<" ";
		    	S.pop();
			}

		}
		cout<<endl;    	
	}
    return 0;
 }

