#include <stdio.h>

int main()
{
    int n, i, j;
    int depth, balls, location;
    freopen("input.txt", "r", stdin);
    while( scanf("%d", &n) == 1 && n != -1 ){
        while( n-- ){
            scanf("%d %d", &depth, &balls);
            location = 1;
            for( j = 1; j < depth; j++)
                if(balls%2){
                    location = 2*location;
                    balls = (balls+1)/2;
                }else{
                    location = 2*location + 1;
                    balls = balls/2;
                }
             printf("%d\n", location);
        }
    }
    return 0;
}
