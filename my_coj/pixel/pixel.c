/*
 * =====================================================================================
 *
 *       Filename:  pixel.c
 *
 *    Description:  count how many pixels in the screen within a circle
 *
 *        Version:  1.0
 *        Created:  05/28/2016 09:35:24 AM
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
{   long int x, y, r;
    long int i,j,k;
    long int sum;
    long int last;
    freopen("input.txt", "r", stdin);
    while( scanf("%ld %ld %ld", &x, &y, &r) != EOF && r){
        sum = 0;
        last = 0;
        for( i = 0; i < r; i++){
            sum += r - i;
            for( j = r-i; j < r; j++ ){
                sum++;
                if( pow(i+1, 2) + pow(j+1, 2) > pow(r, 2) ){
                    for( k = j+1; k < last; k++)
                        if( pow(i,2) + pow(k,2) < pow(r,2) )
                            sum++;
                    last = j+1;
                    break;
                }
            }
        }
        printf("%ld\n", sum * 4);
    }
    return 0;
}

