#include <stdio.h>
#include <string.h>

char codes[8][1<<8];

void printcodes(){
    int i, j, len, val;
    for( len = 0; len < 8; len++)
        for( val = 0; val <(1<<len)-1; val++)
            printf("%c\t", codes[len][val]);
}

int coding()
{
    int input, len, val;
    memset( codes, 0, sizeof(codes) );

    while( (input = getchar()) == '\n' || input == '\r' );
    if( input == EOF )
        return 0;

    //codes[1][0] = firstchar;
    for( len = 1; len < 8; len++){
        for( val = 0; val < (1<<len) - 1; val++){
            if( input == '\n')
                return 1;
            codes[len][val] = input;
            input = getchar();
        }
    }
    return 1;
}

int readchar(){
    char input;
    while( (input = getchar()) == '\n' || input == '\r' );
    return input;
}

int readint( int len ){
    int val = 0;
    while( len-- )
        val = val*2 + readchar()-'0';
    return val;
}

int main()
{
    int i, j;
    int size, len, val, input;

    freopen("input.txt", "r", stdin);

    while( coding() ){
//        printcodes();
        while( 1 ){
            size = readint(3);
            if( size == 0)
                break;
//            printf("size %d\n", size);
            while(1){
                val = readint(size);
                if( val == (1<<size) - 1 )
                    break;
                else{                           //printf("%d %d:\t", size, val);
                    putchar(codes[size][val]);  // putchar('\n');
                }
            }
        }
        putchar('\n');
//        firstchar = input;
    }
    return 0;
}
