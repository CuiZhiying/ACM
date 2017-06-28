#include <stdio.h>
#include <string.h>

int getl( char *buffer )
{
    int i = 0, input;
    while( (input = getchar()) != EOF){
        if( i == 0 && input == '\n' )
            continue;
        if( input == '\n')
            break;
        buffer[i++] = input;
    }
    buffer[i] = '\0';
    return i;
}

int main()
{   char puzzle[5][6];
    char operation;
    char input[100];
    int  i, j, k, len;
    int  bi, bj, state;

    int count = 1;
    freopen("input.txt", "r", stdin);    
    while( getl(input) ){
        if( strlen(input) == 1 && input[0] == 'Z')
            break;

        for( i = 0; i < 6; i++)
            puzzle[0][i] = input[i];
        
        for( i = 1; i < 5; i++)
            getl(puzzle[i]);

        for( i = 0; i < 5; i++)
            for( j = 0; j < 5; j++ )
                if( puzzle[i][j] == ' ' ){
                    bi = i;
                    bj = j;
                }

        state = 1;
        while( (operation = getchar()) != EOF && operation != '0' )
        {
            switch( operation ){
                case 'A':
                    if( bi - 1 >= 0){
                        puzzle[bi][bj] = puzzle[bi-1][bj];
                        puzzle[--bi][bj] = ' ';
                    }else
                        state = 0;
                    break;;
                case 'R': 
                    if( bj + 1 < 5){
                        puzzle[bi][bj] = puzzle[bi][bj+1];
                        puzzle[bi][++bj] = ' ';
                    }else
                        state = 0;
                    break;;
                case 'B': 
                    if( bi + 1 < 5 ){
                        puzzle[bi][bj] = puzzle[bi+1][bj];
                        puzzle[++bi][bj] = ' ';
                    }else
                        state = 0;
                    break;;
                case 'L':
                    if( bj - 1 >= 0){
                        puzzle[bi][bj] = puzzle[bi][bj -1];
                        puzzle[bi][--bj] = ' ';
                    }else
                        state = 0;
                    break;;
                default: 
                    break;
            }
        }
        if(count != 1)
            putchar('\n');
        printf("Puzzle #%d:\n", count++);
        if(state){
            for( i = 0; i < 5; i++){
                for( j = 0; j < 5; j++){
                    printf("%c",puzzle[i][j]);
                    if( j != 4)
                        putchar(' ');
                }
                putchar('\n');
            }

        }
        else
            printf("This puzzle has no final configuration.\n");
    }
    return 0;
}
