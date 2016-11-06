/*
 * =====================================================================================
 *
 *       Filename:  DNA_Sorting.c
 *
 *    Description:  POJ-1007
 *
 *        Version:  1.0
 *        Created:  07/03/2016 09:13:40 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>

#define MAX_COL 51
#define MAX_ROW 100

int main()
{
	char DNA[MAX_ROW][MAX_COL];
	int order[100];
	char temp;
	int col, row;
	int i, j, k;
	int inversion;

	memset(order, 0, sizeof(int)*100);
	scanf("%d %d", &col, &row);
	for( i = 0; i < row; i++){
		inversion = 0;
		scanf("%s", DNA[i]);
		for(j = 0; j < col; j++){
			temp = DNA[i][j];
			for( k = j+1; k < col; k++)
				inversion += temp > DNA[i][j] ? 1 : 0; 
		}
		order[i] = inversion;
	}
	for(temp = 1, i = 0; i <)
}
