/*
 * =====================================================================================
 *
 *       Filename:  refer.c
 *
 *    Description:  coj1217
 *
 *        Version:  1.0
 *        Created:  07/16/2016 11:02:18 AM
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
	int input;
	int ans;
	int n;
	freopen("input.txt", "r", stdin);
	while( scanf( "%d", &n ) != EOF ){
		ans = 0;
		while( n-- ){
			scanf("%d", &input);
			ans ^= input;
		}
		printf("%d\n",ans);
	}
	return 0;
}
