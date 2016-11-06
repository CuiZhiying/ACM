/*
 * =====================================================================================
 *
 *       Filename:  caption.c
 *
 *    Description:  coj1220
 *
 *        Version:  1.0
 *        Created:  07/16/2016 11:10:28 AM
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

int candidate[10001];
int main()
{
	int m,n;
	int ticket;
	int max_voted, ans;
	freopen("input.txt", "r", stdin);
	while( scanf("%d %d", &n, &m ) != EOF ){
		memset( candidate, 0, 10001*sizeof( int ));
		max_voted = 0;
		ans = 0;
		while( m-- ){
			scanf("%d", &ticket);
			candidate[ticket]++;
			if( candidate[ticket] > max_voted ){
				max_voted = candidate[ticket];
				ans = ticket;
			}else if( candidate[ticket] == max_voted && ticket < ans )
				ans = ticket;
		}
		printf("%d\n", ans);
	}
	return 0;
}
