/*
 * =====================================================================================
 *
 *       Filename:  pal.c
 *
 *    Description:  ACM training huiwen
 *
 *        Version:  1.0
 *        Created:  05/27/2016 04:19:20 PM
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
{   int n;
    char input[1001];
    int i;
    int j;
    int result;
    freopen("input.txt", "r", stdin);
    while( scanf("%d", &n) != EOF && n > 0)
        while( n-- )
        {
        scanf("%s", input);
        i = 0;
        j = strlen( input ) - 1;
        result = 1;
        while( i < j)
            if( input[i++] != input[j--]){
                result = 0;
                break;
            }
        if(result)
            printf("YES\n");
        else
            printf("NO\n");
        }
    return 0;
}
