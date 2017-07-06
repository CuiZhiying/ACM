#include <stdio.h>
#include <string.h>

#define MAX 100000

int main(){
    char input[MAX+10];
    int  next[MAX+10];
    int i, j, k;
    int head, tail, cur, len;
    while( scanf("%s", input+1 ) != EOF ){
        len = strlen( input+1 );

        head = 0, tail = 0, next[0] = 0;
        memset( next, 0, sizeof(next));
        for( i = 1, cur = 0; i <= len; i++ ){
            if( input[i] == '[' ){
                cur  = head;
            }else if( input[i] == ']' ){
                cur = tail;
            }else{
                next[i] = next[cur];
                next[cur] = i;
                if( tail == cur )
                    tail = i;
                cur = i;
            }
        }
        for( i = next[0]; i != 0; i = next[i])
            printf("%c", input[i]);
        printf("\n");
    }
    return 0;
}
