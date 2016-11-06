/*
 * =====================================================================================
 *
 *       Filename:  houseboat.c
 *
 *    Description:  POJ-1005 超水题
 *
 *        Version:  1.0
 *        Created:  07/03/2016 08:56:01 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

#define Pi 3.14159

int main()
{
	float X,Y;
	int   i;
	int   n;//几组数据
	float r;
	float area;
	
	freopen("input.txt", "r", stdin);
	scanf("%d", &n);
	i = 1;
	while( n-- ){
		scanf("%f %f", &X, &Y);
		r = X > Y ? X : Y;
		area = Pi * r * r / 2;
		printf("Property %d: This property will begin eroding in year %d.\n", i++, (int)area/50+1);
	}
	printf("END OF OUTPUT.\n");
}
