/*
 * =====================================================================================
 *
 *       Filename:  new.c
 *
 *    Description:  ACM training! A new answer
 *
 *        Version:  1.0
 *        Created:  06/04/2016 11:33:11 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int test_state( int x, int y, int r)
{   int result = x*x + y*y - r*r;
    if( result > 0)
        return 1;
    else if( result == 0 ) 
        return 0;
    else
        return -1;
}
int main()
{   int n;
    int x, y, r;
    int state;
    long long int count;
    freopen("input.txt", "r", stdin);
    while( scanf("%d %d %d", &x, &y, &r) != EOF){
        if( !x && !y && !r)
            break;
        x = 1;
        y = r;
        count = 0;
        while( y ){
            state = test_state( x, y, r);
            if( state == 1){
                count++;
                y--;
            }else if( state == 0 ){
                x++;
                count += y;
            }else{
                x++;
                count += y;
                y++;
            }
        }
        printf("%lld\n", count*4);
    }
    return 0;
}


















