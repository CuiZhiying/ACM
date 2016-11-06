/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  this is a test for gdb
 *
 *        Version:  1.0
 *        Created:  07/01/2016 10:20:18 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int add_range(int low, int high)
{
	int i, sum;
        sum = 0;
	for (i = low; i <= high; i++)
		sum = sum + i;
	return sum;
}

int main (void)
{
	int result[100];
	result[0] = add_range(1, 10);
	result[1] = add_range(1, 100);
        printf("result[0] = %d\nresult[i] = %d\n", result[0], result[1]);
	return 0;
}
