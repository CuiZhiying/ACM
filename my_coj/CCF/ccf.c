/*
 * =====================================================================================
 *
 *       Filename:  ccf.c
 *
 *    Description:  ACM training. operation to matrix
 *
 *        Version:  1.0
 *        Created:  06/05/2016 11:06:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define MAX 1000

int main()
{   int num;
    int i,j;
    int n,m;
    int order;
    int matrix[MAX][MAX];
    int result[MAX][MAX];
    freopen("input.txt", "r", stdin);
    while( scanf("%d", &num) != EOF && num)
        while( num-- ){
            scanf("%d %d", &n, &m);
            scanf("%d", &order);
            for( i = 0; i < n; i++)
                for( j = 0; j < m; j++)
                    scanf("%d", &matrix[i][j]);
            if( order == 1 ){
                for( i = 0; i < n; i++ )
                    for( j = 0; j < m; j++ )
                        result[j][n-i-1] = matrix[i][j];
            }else if( order == 2 ){
                 for( i = 0; i < n; i++)
                     for( j = 0; j < m; j++ )
                         result[m-j-1][i] = matrix[i][j];
            }
            for( i = 0; i < m; i++){
                for( j = 0; j < n-1; j++)
                    printf("%d ", result[i][j]);
                printf("%d\n", result[i][j]);
            }
        }
    return 0;
}

