#include <stdio.h>
int main()
{   freopen("input.txt", "r", stdin);
    int input, sign;
    sign = 1;
    while( (input = getchar()) != EOF )
        if( input == '"'){
            printf("%s", sign ? "``" : "''");
            sign = !sign;
         }else
            printf("%c",input);
    return 0;
}
