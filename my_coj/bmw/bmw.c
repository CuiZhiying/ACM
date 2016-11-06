/*
 * =====================================================================================
 *
 *       Filename:  bmw.c
 *
 *    Description:  ACM training
 *
 *        Version:  1.0
 *        Created:  06/04/2016 11:57:08 PM
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
int main()
{   int B, M, W;
    int i, j;
    int len;
    int result;
    char input[1000001];
    freopen("input.txt", "r", stdin);
    while( scanf("%s", input) != EOF ){
        B = 0, M = 0, W = 0;
        len = strlen(input);
        for( i = 0; i < len; i++)
            if(input[i] == 'B' || input[i] == 'b')
                B++;
            else if( input[i] == 'M' || input[i] == 'm' )
                M++;
            else if( input[i] == 'W' || input[i] == 'w' )
                W++;
        result = B > M ? M : B;
        result = result > W ? W : result;
        printf("%d\n", result);
    }
    return 0;
}
