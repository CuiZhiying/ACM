#include <stdio.h>

int is_balance(int w1, int d1, int w2, int d2){
    int ww1, dd1, ww2, dd2;
    if( w1 == 0 ){
        scanf("%d %d %d %d", &ww1, &dd1, &ww2, &dd2);
        w1 = is_balance(ww1, dd1, ww2, dd2);
        if( w1 == 0 )
            return 0;
    }
    if( w2 == 0 ){
        scanf("%d %d %d %d", &ww1, &dd1, &ww2, &dd2);
        w2 = is_balance(ww1, dd1, ww2, dd2);
        if( w2 == 0 )
            return 0;
    }
    if( w1*d1 == w2*d2 )
        return w1+w2;
    else
        return 0;
}

int main()
{   
    int n;
    int w1, d1, w2, d2;
    freopen("input.txt", "r", stdin);
    while( scanf("%d", &n) == 1 && n > 0 ){
        while( n-- ){
            scanf("%d %d %d %d", &w1, &d1, &w2, &d2);
            if( is_balance( w1, d1, w2, d2))
                printf("YES\n");
            else
                printf("NO\n");
            if(n)
                printf("\n");
        }
    }
    return 0;
}
