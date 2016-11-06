/*
 * =====================================================================================
 *
 *       Filename:  stable.c
 *
 *    Description:  coj1215 稳定排序
 *
 *        Version:  1.0
 *        Created:  07/16/2016 04:29:46 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<cstdio>
#include<algorithm>
using namespace std;
#define Maxsize 100003

typedef struct Node{
	int num1;
	int num2;
	int order;
}Node;
Node node[Maxsize];

bool campare( Node a, Node b )
{
	if( a.num1 == b.num1 )
		return a.order < b.order;
	else
		return a.num1 < b.num1;	
}

int main()
{
	int n, i;
	freopen("input.txt", "r", stdin);
	while( scanf("%d", &n) != EOF && n ){
		for( i = 1; i <= n; i++ ){
			scanf("%d %d", &node[i].num1, &node[i].num2);
			node[i].order = i;
		}
		sort( node+1, node+n+1, campare );
		for( i = 1; i <= n; i++ )
			printf("%d %d\n", node[i].num1, node[i].num2 );
	}
	return 0;
}








