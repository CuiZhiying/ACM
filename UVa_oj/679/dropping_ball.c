#include <stdio.h>
#include <string.h>

int tree[1<<20];

void change( int *a ){
    if( *a == 0 )
        *a = 1;
    else
        *a = 0;
}

int main()
{
    int n, depth, balls, len, location;
    int i, j;

    freopen("input.txt", "r", stdin);

    while( scanf("%d", &n) == 1 ){
    if( n == -1 )
        continue;
    while(n--){
        scanf("%d %d", &depth, &balls);
        memset(tree, 0, sizeof(tree));

        for( i = 0; i < balls; i++ ){
            location = 1;
            for( j = 1; j < depth; j++ ){
                change( &tree[location] );
                if( tree[location] == 0 )
                    location = 2*location+1;
                else
                    location = 2*location;
            }
        }
        printf("%d\n", location);
    }
    }
    return 0;
}
