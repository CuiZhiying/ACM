/*
 * =====================================================================================
 *
 *       Filename:  Fina.c
 *
 *    Description:  Zoj problem set 1048
 *
 *        Version:  1.0
 *        Created:  05/23/2016 07:30:54 PM
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
{  double sum = 0;
   double month = 0;
   int n = 12;
   freopen("input.txt", "r", stdin);
   while( n-- ){
       scanf("%lf", month);
       sum += month;
   }
   printf("$%.2lf", sum);
   return 0;
}
