/*
 * =====================================================================================
 *
 *       Filename:  zhong.c
 *
 *    Description:  中位数
 *
 *        Version:  1.0
 *        Created:  05/25/2016 10:41:11 PM
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
    int num1[100000];
    int num2[100000];
    int combine[200001];
    int i;
    int j;
    int k;
    freopen("input.txt", "r", stdin);
    while( scanf("%d", &n) != EOF && n > 0 ){
        for( i = 0; i < n; i++)
            scanf("%d", &num1[i]);
        for( i = 0; i < n; i++)
            scanf("%d", &num2[i]);
        for( i = 0, j = 0, k = 1; i < n || j < n; k++ ){
            if( i == n)
                combine[k] = num2[j++];
            else if( j == n )
                combine[k] = num1[i++];
            else if( num1[i] < num2[j] ) 
                combine[k] = num1[i++];
            else
                combine[k] = num2[j++];
            //printf("%d\t", combine[k]);
        }
        printf("\n%d\n", combine[n]);
    }
    return 0;
}
