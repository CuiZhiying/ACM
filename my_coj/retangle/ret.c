/*
 * =====================================================================================
 *
 *       Filename:  ret.c
 *
 *    Description:  入门题E
 *
 *        Version:  1.0
 *        Created:  05/24/2016 12:42:40 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main()
{   int n;
    int x,y;
    int ax,ay,bx,by;
    freopen("input.txt", "r", stdin);
    while( scanf("%d", &n) != EOF && n > 0 ){
        while( n-- ){
            scanf("%d %d", &x, &y);
            scanf("%d %d %d %d", &ax, &ay, &bx, &by);
            if( x < ax || y < ay || x > bx || y > by )
                printf("Outside\n");
            else if( x > ax && y > ay && x < bx && y < by )
                printf("Inside\n");
            else 
                printf("On\n");
                
        }
    }
    return 0;
}
