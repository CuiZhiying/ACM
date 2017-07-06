#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp( const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int main()
{   int secret[27];
    int origin[27];
    char input[100];
    int i, j, k, n;

    int flag;

    freopen("input.txt", "r", stdin);
    while( scanf("%s", input) != EOF ){
        memset(secret, 0, sizeof(secret));
        memset(origin, 0, sizeof(origin));

        for( i = 0; input[i] != '\0' && i < 100; i++)
            secret[ input[i] - 'A'] ++;
        scanf("%s", input);
        for( i = 0; input[i] != '\0' && i < 100; i++)
            origin[ input[i] - 'A'] ++;


        qsort( secret, 26, sizeof(int), cmp );
        qsort( origin, 26, sizeof(int), cmp );

        for( flag = 1, i = 0; i<26; i++ )
            if( origin[i] != secret[i] ){
                flag = 0;
                break;
            }
        
        if( flag )
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
