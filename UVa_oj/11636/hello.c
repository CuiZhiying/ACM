#include <stdio.h>

int main()
{   int num;
    int cse;
    int copy_time;
    int sum;
    freopen("input.txt", "r", stdin);
    
    cse = 1;
    while( scanf("%d", &num) != EOF && num > 0){
        for( copy_time = 1, sum = 1; sum < num; copy_time++ )
            sum *= 2;
        printf("Case %d: %d\n", cse, --copy_time);
        cse++;
    }
    return 0;
}
