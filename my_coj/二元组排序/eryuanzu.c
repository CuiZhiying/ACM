/*
 * =====================================================================================
 *
 *       Filename:  eryuanzu.c
 *
 *    Description:  ACM training
 *
 *        Version:  1.0
 *        Created:  06/07/2016 12:01:18 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define MAX 100001

int main()
{   int input[2];
    int order[MAX][2];
    int n;
    int i,j;
    freopen("input.txt", "r", stdin);
    while( scanf("%d", &n) != EOF && n){
        order[0][0] = 0;
        for( i = 1; i <= n; i++ ){
            scanf("%d %d", &input[0], &input[1]);
            if( input[0] >= order[i-1][0] ){
                order[i][0] = input[0];
                order[i][1] = input[1];
            }else{
                j = i;
                while( input[0] < order[j-1][0] ){
                    order[j][0] = order[j-1][0];
                    order[j][1] = order[j-1][1];
                    j--;
                }
                order[j][0] = input[0];
                order[j][1] = input[1];
            }
        }
        for( i = 1; i <= n; i++)
            printf("%d %d\n", order[i][0], order[i][1]);
    }
    return 0;
}









