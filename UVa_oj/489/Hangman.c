#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, k; 
    char answer[100];
    char guess[100];
    int len, state, draws, win;

    freopen("input.txt", "r", stdin);
    while( scanf("%d", &n) && n != -1 ){
        printf("Round %d\n", n);
        scanf("%s %s", answer, guess);
        len = strlen(answer);
        draws = 0;
        for( i = 0; guess[i] != '\0'; i++ ){
            state = 1;
            win   = 1;
            for( j = 0; j < len; j++ ){
                if( guess[i] == answer[j] ){
                    answer[j] = 0;
                    state = 0;
                }   
            }

            if( state )
                draws++;
            if( draws >= 7 ){
                printf("You lose.\n");
                break;
            }
            for( j = 0; j < len; j++ )
                if( answer[j] != 0 )
                    win = 0;
            if( win ){
                printf("You win.\n");
                break;
            }
        }
        if( draws < 7 && !win )
            printf("You chickened out.\n");
    }

    return 0;
}
