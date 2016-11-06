/*
 * =====================================================================================
 *
 *       Filename:  str.c
 *
 *    Description:  ACM training get a string
 *
 *        Version:  1.0
 *        Created:  05/27/2016 05:07:54 PM
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
{   char c[1000001];
    char output[1000001];
    int a,b,d,e;
    int len;
    int i;
    freopen("input.txt", "r", stdin);
    while( scanf("%d %d %d %d", &a, &b, &d, &e) != EOF ){
        scanf("%s",c);
        len = a * b % d;
        for( i = 0; i < len; i++)
            output[i] = c[e+i];
        output[i] = '\0';
        printf("%s\n", output);
    }
    return 0;
    
}
