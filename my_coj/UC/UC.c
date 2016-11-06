#include <stdio.h>

int main()
{   int input;
    int count;
    int state;
    int summary;
    int i;
    
    freopen("input.txt","r",stdin);  
    count = 0;
    scanf("%d", &count);
    while(count--)
    {   state = 0;
        summary = 0;
        scanf("%d",&i);
        getchar();
        while(i--)
        {   //printf("summary is %d\n",summary);
            input = getchar();
            //scanf("%d",&input);
            if( input == '1' )
                state++;
            else if( input == '0' ){ 
                state = 0;
                continue;
            }
            if( state%5==0 )
                summary += 50;
            else
                summary += state%5*10;
        }
        //getchar();
        //printf("summary is %d\n",summary);
        if( summary < 50 )
            printf("%d\n",0);
        else if( summary < 150 )
            printf("%d\n",1);
        else if( summary < 250 )
            printf("%d\n",2);
        else if( summary < 350 )
            printf("%d\n",3);
        else if( summary < 450 )
            printf("%d\n",4);
        else if( summary < 550 )
            printf("%d\n",5);
        else if( summary < 650 )
            printf("%d\n",6);
        else if( summary < 750 )
            printf("%d\n",7);
        else 
            printf("%d\n",8);
    }
    return 0;
}
