#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{   
    int n, i;
    int result;
    char input[100], state;
    freopen("input.txt", "r", stdin);

    scanf("%d", &n);
    if( n == 0)
        return 0;

    while(n--){
        state = 0;
        result = 0;
        
        memset(input, 0, 100);
        scanf("%s", input);
        for(i = 0; input[i] != '\0'; i++){
            if( input[i] == 'X')
                state = 0;
            if( input[i] == 'O')
                state++;
            result += state;
//            printf("%s\t", input);
        }
        printf("%d\n", result);
    }
    return 0;
}
