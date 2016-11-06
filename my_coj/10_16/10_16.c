/*
 * =====================================================================================
 *
 *       Filename:  10_16.c
 *
 *    Description:  ACM training transfor 10 to  16
 *
 *        Version:  1.0
 *        Created:  05/27/2016 12:41:43 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
char number[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
int main()
{   long int input;
    int result[8];
    long int rest;
    int i;
    freopen("input.txt","r", stdin);
    while(scanf("%ld", &input ) != EOF ){
        i = 8;
        while(i--){
            result[i] = number[input%16];
            input = input / 16;
        }
        printf("0X");
        for(i = 0; i<8; i++)
            printf("%c", result[i]);
        putchar('\n');
    }
    return 0;
}

















