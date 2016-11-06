/*
 * =====================================================================================
 *
 *       Filename:  robot.c
 *
 *    Description:  ACM training.
 *
 *        Version:  1.0
 *        Created:  06/04/2016 10:51:13 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,i,j,num;
    char input[100];
    int action[101];
    int location;
    int len;
    char ch;
    int order_number;
    freopen("input.txt", "r", stdin);
    while( scanf("%d", &n) != EOF )
        while( n-- ){
            scanf("%d", &num);
            location = 0;
            for( i = 1; i <= num; i++){
                j = 0;
                scanf("%s", input);
                if( input[0] == 'L')
                    action[i] = -1;
                else if( input[0] == 'R')
                    action[i] = 1;
                else{
                    scanf("%s", input);
                    scanf("%s", input);
                    order_number = atoi(input);
                    action[i] = action[order_number];
                }
            }
            for( i = 1; i <= num; i++)
                location += action[i];
            printf("%d\n", location);
        }
    return 0;
}
