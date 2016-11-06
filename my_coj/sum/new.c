/*
 * =====================================================================================
 *
 *       Filename:  new.c
 *
 *    Description:  coj 1161
 *
 *        Version:  1.0
 *        Created:  07/16/2016 05:38:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int num1[1000001];
int num2[1000001];
int result[1000001];

int main()
{
	int len;
	int i;
	int carry;
	freopen("input.txt", "r", stdin);
	while( scanf("%d", &len) != EOF && len ){
		carry = 0;
		for( i = 0; i < len; i++ )
			scanf("%d %d", &num1[i], &num2[i] );
		for( i = len-1; i > -1; i--){ 
			result[i] = (num1[i] + num2[i] + carry) % 10;
			carry = (num1[i] + num2[i] + carry)/10;
		}
		if( carry ){
			printf("%d", carry);
			for( i = 0; i < len; i++ )
				printf("%d", result[i]);
			printf("\n");
		}else{
			i = 0;
			while( result[i++] == 0 && i < len );
			if( i == len)
				printf("0");
			else for( i--; i < len; i++)
				printf("%d", result[i]);
			printf("\n"); 
		}
	}
	return 0;
}
