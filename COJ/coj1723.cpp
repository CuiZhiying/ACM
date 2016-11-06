#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int T,cot=0;
	scanf("%d",&T);
	while(T--)
	{
		int round,num,max;
		scanf("%d",&round);
		if(round==0)
		{
			max=1;num=1;
		}
		else if(round==1)
		{
			max=2;num=2;
		}
		else if(round==2)
		{
			max=4;num=4;
		}
		else{
			int r=(round-3)%4;
			switch(r){
				case 0:num=6;max=6;break;
		    	case 1:num=6;max=6;break;
		    	case 2:num=5;max=6;break;
		    	case 3:num=4;max=6;break;
			}
			
		}
		printf("Case %d: %d %d\n",++cot,num,max);
	}
	return 0;
}
