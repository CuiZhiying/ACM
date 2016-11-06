/*
 * =====================================================================================
 *
 *       Filename:  hangover.c
 *
 *    Description:  POJ-1003 超水题
 *
 *        Version:  1.0
 *        Created:  07/03/2016 07:58:56 PM
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
{
	float  length;
	float    i;
	float  sum;

	freopen("input.txt", "r", stdin);
	while( scanf("%f", &length) != EOF && length != 0.00){
		for( i = 2, sum = 0; sum < length; i++ )
			sum  += 1/i;
		printf("%d card(s)\n", (int)i-2);
	}
	return 0;
}






