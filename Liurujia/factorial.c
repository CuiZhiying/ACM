#include <stdio.h>
#include <string.h>

#define LEN 3000

int main()
{
    int i, j, c;
    int input;
    int temp;
    int result[LEN];

    freopen("factorial.c.input", "r", stdin);

    while( scanf("%d\n", &input) != EOF && input > 0 ){
        memset( result, 0, sizeof(result) );
        result[0] = 1;
        for( i = 2; i <= input; i++){
            for( j = 0, c = 0; j < LEN; j++){
                //if(j < 2) printf("%d\n", result[i]);
               
                temp = result[j] * i + c;
                result[j] = temp % 10;
                //printf("temp: %d\n", result[j]);
                c = temp / 10;
            }
            //printf("result: %d c: \t%d\n", result[0], c);
        }
        for( i = LEN-1; i >= 0; i-- )
            if( result[i] )
                break;
        for( ; i >= 0; i-- )
            printf("%d", result[i]);
        putchar('\n');
    }

    return 0;
}

