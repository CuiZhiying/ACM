#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    int  i, j, len;
    int  state, is_found;
    freopen("Loop.c.input", "r", stdin);

    while( scanf("%s", word ) != EOF )
    {   
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
            printf("Not found!\n");

    }
    return 0;
}

