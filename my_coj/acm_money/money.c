/*
 * =====================================================================================
 *
 *       Filename:  money.c
 *
 *    Description:  ACM training
 *
 *        Version:  1.0
 *        Created:  06/05/2016 12:58:54 PM
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
    int i;
    int people; 
    int money;
    int num[100];
    int count;
    int max;
    freopen("input.txt", "r", stdin);
    while( scanf("%d", &n) != EOF && n)
        while( n--){
            scanf(" %d %d", &money, &people);
            for( i = 0; i < people; i++)
                scanf("%d", &num[i]);
            for( count = 0,i = 0, max = 0; i < people; i++)
                if( num[i] > max ){
                    max = num[i];
                    count = 1;
                }else if( num[i] == max )
                    count++;
            printf("%d\n", money / count);
        }
    return 0;
}
