/*
 * =====================================================================================
 *
 *       Filename:  yuanzui.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/05/2016 03:57:00 PM
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

#define pi 3.141592654
int main()
{   unsigned double s;
    unsigned double s_d;
    unsigned double h;
    while( scanf("%lf", &s) != EOF ){
        s_d = s/4;
        h = sqrt(s_d/pi*8);
        printf("%.12lf\n", s_d*h/3);
        //cout<<fixed<<setprecision(12)<<
    }
    return 0;
}
