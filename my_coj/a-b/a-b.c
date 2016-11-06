/*
 * =====================================================================================
 *
 *       Filename:  a-b.c
 *
 *    Description:  ACM 入门题a-b
 *
 *        Version:  1.0
 *        Created:  05/25/2016 06:31:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
int main()
{   long long int a, b;
    while( scanf("%lld %lld", &a, &b) != EOF){
        if( a > b )
            printf("%lld\n", a - b);
        else
            printf("%lld\n", b - a);
    }
}
