#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    int  i, j, len, n;
    int  state, is_found;
    freopen("input.txt", "r", stdin);

    scanf("%d", &n);
    if( n ==0 )
        return 0;

    while( n-- )
    {  
        scanf("%s", word);
        len = strlen( word );
        is_found = 0;
        for( i = 1; i < len; i++){
            state = 1;
            if( len % i == 0 ){        //判断是否整除，如果整除则有可能为周期长度
                for( j = i; j < len; j++ )
                    if( word[j] != word[j%i] ){
                        state = 0;
                        break;
                    }
                if(state){
                    printf("%d\n", i);
                    is_found = 1;
                    break;
                }
               
            }
               
        }
        if(!is_found)
            printf("%d\n", len);
        if( n )
            printf("\n");

    }
    return 0;
}

