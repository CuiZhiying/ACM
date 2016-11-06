#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int n;
    while ( scanf( "%d", &n ) , n )
    {
        n ++;
        while ( (n&1) == 0 )
            n >>= 1;
        if ( n == 1 )
            puts( "Bob" );
        else
            puts( "Alice" );
    }
    return EXIT_SUCCESS;
}
