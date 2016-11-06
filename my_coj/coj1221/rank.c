/*
 * =====================================================================================
 *
 *       Filename:  rank.c
 *
 *    Description:  coj 1221
 *
 *        Version:  1.0
 *        Created:  07/16/2016 03:39:23 PM
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
	float max1, max2, max3;
	int n;
	float input;
	freopen("input.txt", "r", stdin);
	while( scanf("%d", &n) != EOF ){
		max1 = max2 = max3 = 0;
		while( n-- ){
			scanf("%f", &input);
			if( input > max1 ){
				max3 = max2;
				max2 = max1;
				max1 = input;
			}else if( input > max2 ){
				max3 = max2;
				max2 = input;
			}else if( input > max3){
				max3 = input;
			}
		}
		printf("%0.2f %0.2f %0.2f\n", max1, max2, max3 );
	}
	return 0;
}

















