/*
 * =====================================================================================
 *
 *       Filename:  caiquan.c
 *
 *    Description:  ACM training to decide which one is winner
 *
 *        Version:  1.0
 *        Created:  05/28/2016 10:19:21 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

#define MAX 1000001

int main()
{   int n;
    int num;
    int input[MAX];
    int i;
    int s,j,b;
    int winner;
    freopen("input.txt", "r", stdin );
    while( scanf("%d", &n) != EOF && n)
        while(n--){
            s = 0; j = 0; b = 0;
            scanf("%d", &num );
            for( i = 1; i <= num; i++){
                scanf("%d", &input[i]);
                if( input[i] == 0 )
                    s++;
                else if( input[i] == 2 )
                    j++;
                else 
                    b++;
            }
            if( s==0 && j == 1 )
                winner = 2;
            else if( j==0 && b == 1 )
                winner = 5;
            else if( b==0 && s == 1 )
                winner = 0;
            else 
                winner = -1;
            for(i = 1; input[i] != winner && i <= num; i++);
            if( i > num )
                printf("No winner\n");
            else
                printf("%d\n", i);
        }
    return 0;
}
























