/*
 * =====================================================================================
 *
 *       Filename:  sanguosha.c
 *
 *    Description:  acm training shui ti yidao
 *
 *        Version:  1.0
 *        Created:  05/26/2016 11:58:22 PM
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
{   char input[1001];
    int i;
    int operations;
    int len;
    int state;
    int count;
    
    freopen("input.txt", "r", stdin);
    while( scanf("%s", input) != EOF ){
        operations = 0;
        count = 0;
        len = strlen(input);
        state = input[0];
        for( i = 0; i < len; i++){
            if( input[i] == state )
                count++;
            else if( count > operations ){
                operations = count;
                state = input[i];
                count = 1;
            }else{
                count = 1;
                state = input[i];
            }
        }
        printf("%d\n", count > operations ? count : operations);
    }
    return 0;
}














