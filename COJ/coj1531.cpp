#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;
typedef struct{
	double x;
	double y;
	bool flag;
}EX;
int XYC_dre(EX ex[],int j,int k)
{
	int count_x=0,count_y=0;
	int DOWN_X=floor(ex[j].y);
	int UP_X=DOWN_X+1;
	int DOWN_Y=floor(ex[j].x);
	int UP_Y=DOWN_Y+1;
	for(int i=0;i<k;i++)
	{
		if(ex[i].flag==false&&ex[i].y<UP_X&&ex[i].y>DOWN_X)
		{
			count_x++;
		}
		if(ex[i].flag==false&&ex[i].x<UP_Y&&ex[i].x>DOWN_Y)
		{
			count_y++;
		}
	}
	if(count_x>count_y)
	{
		for(int i=0;i<k;i++)
    	{
	    	if(ex[i].flag==false&&ex[i].y<UP_X&&ex[i].y>DOWN_X)
      		{
	    		ex[i].flag = true;
     		}
    	}
	}
	else
	{
		for(int i=0;i<k;i++)
    	{
	    	if(ex[i].flag==false&&ex[i].x<UP_Y&&ex[i].x>DOWN_Y)
	    	{
		    	ex[i].flag = true;
	    	}
    	}
	}
}

int main()
{
	int R;
	cin>>R;
	while(R--)
	{
		int count=0;
		int N,M,K;
		cin>>N>>M>>K;
		EX ex[K];
		for(int i=0;i<K;i++)
		{
			cin>>ex[i].x>>ex[i].y;
			ex[i].flag =false;
		}
		for(int j=0;j<K;j++)
		{
			if(ex[j].flag == false)
			{
				ex[j].flag=true;
				XYC_dre(ex,j,K);
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
} 
