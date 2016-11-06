/*
 * =====================================================================================
 *
 *       Filename:  Firenet.c
 *
 *    Description:  ZOJ Problem Set-1002
 *
 *        Version:  1.0
 *        Created:  05/23/2016 06:20:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>

int map[4][4];
int is_legal( int n )
{   int state;
    int i,j;
    /*int start;
    int end;    //use to check for each line and clom.
 
    if( n == 1 )
        return 1;
    */
    for( i = 0; i < n; i++ ){
        state = 0;               //0 is legal
        for(j = 0; j < n; j++)
            if(map[i][j] == 'X')
                state = 0;
            else if ( map[i][j] == '*')
                if( state == 1 )
                    return 0;
                else
                    state = 1;
    }
    for( j = 0; j < n; j++){
        state = 0;
        for( i = 0; i < n; i++ )
            if(map[i][j] == 'X')
                state = 0;
            else if( map[i][j] == '*' )
                if( state == 1 )
                    return 0;
                else
                    state = 1;
    }
    return 1;
}
int blockhouses(int n)
{   int i,j;
    for()
       for()
}
int main()
{   int n;
    int i;
    int j;
    freopen("input.txt", "r", stdin);
    while(scanf("%d", &n) && n != 0){
        memset(map, 0, sizeof(map));
        for( i = 0; i < n; i++ ){
            getchar();
            for( j = 0; j < n; j++)
                map[i][j] = getchar();
        }
        for( i = 0; i < n; i++ ){
            for(j = 0; j<n; j++)
               putchar(map[i][j]);
            putchar('\n');
        }
    }
    return 0;
}
















