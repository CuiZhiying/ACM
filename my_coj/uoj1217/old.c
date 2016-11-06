/*
 * =====================================================================================
 *
 *       Filename:  old.c
 *
 *    Description:  奇数那个数
 *
 *        Version:  1.0
 *        Created:  07/16/2016 12:43:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */
/*
#include <stdio.h>
#include <string.h>

#define MAXSIZE 262145

int numbers[ MAXSIZE ];

int main()
{
	int n,i;
	int input;
	//int numbers[ MAXSIZE ];

	freopen("input.txt", "r", stdin );
	while( scanf("%d", &n) != EOF && n ){
		memset(numbers, 0, MAXSIZE*sizeof(int));
		while( n-- ){
			scanf("%d", &input );
			numbers[ input ] += 1;
		}
		for( i = 0; i < MAXSIZE; i++ )
			if( numbers[i] % 2 == 1 )
				printf("%d\n", i);
	}
	return 0;
}
*/

#include <stdio.h>

typedef struct Num
{
	int value;
	int times;
}Num;

int main()
{
	Num *num;
	int i,n,input;
	int count, input;
	while( scanf("%d", &n) != EOF && n ){
		num = ( Num *)malloc( n*sizeof(Num) );
		count = 0;
		while( n-- ){
			scanf("%d", &input);
			count++;
			for( i = 0; i < count; i++ ){
				if( input == num[i].value ){
					num[i].times++;
					break;
				}
			}
			if( i == count ){
				num[i].value = input;
				num[i].times ++;
			}
		}
		
	}
	return 0;
}














