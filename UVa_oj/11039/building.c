#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX  500000

int compare( const void *first, const void *next ){
    const int *a = (int*)first;
    const int *b = (int*)next;

    return abs(*a) - abs(*b);
}

int main()
{
    int cse;
    int num;
    int floors[MAX];

    int i;
    int high;

    freopen("input.txt", "r", stdin);
    while( scanf("%d", &cse) && cse > 0){
        while( cse-- ){
            high = 0;
            scanf("%d", &num);
            
            for( i = 0; i < num; i++)
                scanf("%d", &floors[i]);
            qsort( floors, num, sizeof(int), compare );

            high = floors[0] > 0 ? 1 : -1;

            for( i = 1; i < num; i++)
                if( high > 0 && floors[i] < 0 )
                    high = -(high + 1);
                else if(high < 0 && floors[i] > 0 )
                    high = -(high - 1);
            printf("%d\n", abs(high) );
        }

    }

    return 0;
}
