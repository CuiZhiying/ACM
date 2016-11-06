/*
 * =====================================================================================
 *
 *       Filename:  financial.c
 *
 *    Description:  POJ-1004 求12个月的平均值
 *
 *        Version:  1.0
 *        Created:  07/03/2016 08:39:57 PM
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
	float sum_money;
        float input_money;
        int   i;
	freopen("input.txt", "r", stdin);

	for( sum_money = 0, i = 0; i < 12; i++){
		scanf("%f", &input_money);
		sum_money += input_money;
	}
	printf("$%0.2f\n", sum_money/12 );
	return 0;
}
