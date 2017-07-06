#include <stdio.h>

int Yes;

int balance()
{
    int w1, d1, w2, d2;
    scanf("%d %d %d %d", &w1, &d1, &w2, &d2);
    if( !w1 )
        w1 = balance();
    if( !w2 )
        w2 = balance();
    if( w1*d1 != w2*d2 )
        Yes = 0;
    return w1+w2;
}

int main()
{   
    int n;
    freopen("input.txt", "r", stdin);
    while(scanf("%d", &n) != EOF && n ){
        while(n--){
            Yes = 1;
            balance();
            if( Yes )
                printf("YES\n");
            else
                printf("NO\n");
            if( n )
                printf("\n");
        }
    }
    return 0;
}
