/*
 * =====================================================================================
 *
 *       Filename:  weight.c
 *
 *    Description:  ACM training! calcul the weight factor
 *
 *        Version:  1.0
 *        Created:  06/04/2016 10:41:00 AM
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
    float len;
    float weight;
    double factor;
    while( scanf("%d", &n) != EOF && n )
        while( n-- ){
            scanf("%f %f", &weight, &len);
            factor = weight / ( len*len);
            if( factor < 18.5 )
                printf("Underweight\n");
            else if( factor >= 23)
                printf("Overweight\n");
            else
                printf("Normal\n");
        }
    return 0;
}



















