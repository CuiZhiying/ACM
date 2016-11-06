/*
 * =====================================================================================
 *
 *       Filename:  gan.c
 *
 *    Description:  ACM training Garden
 *
 *        Version:  1.0
 *        Created:  05/27/2016 04:41:20 PM
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
{   int n;
    float sum;
    float a,b;
    float avg;
    int result;
    freopen("input.txt", "r", stdin);
    //scanf("%d", &n);
    while( scanf("%d", &n ) != EOF && n > 0 )
        while(n--){
            scanf("%f %f %f", &a, &b, &sum);
            avg = (a + b)/3;
            result = sum/(a+b-2*avg)*(a-avg) + 0.5;
            printf("%d\n",result);
        }
    return 0;
}

