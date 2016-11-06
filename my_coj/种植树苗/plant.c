/*
 * =====================================================================================
 *
 *       Filename:  plant.c
 *
 *    Description:  ACM training! how to remove some tree from a line!
 *
 *        Version:  1.0
 *        Created:  06/04/2016 11:17:15 AM
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
{   int n;
    int num;
    int count;
    int distance;
    int pre;
    int tree[1000000];
    int i;
    freopen("input.txt", "r", stdin);
    while( scanf("%d", &n) != EOF && n )
        while( n--){
           scanf("%d %d", &num, &distance);
           for( i = 0; i < num; i++)
               scanf("%d", &tree[i]);
           pre = tree[0];
           count = 1;
           for( i = 1; i < num; i++ )
               if( pre+distance <= tree[i] ){
                   count++;
                   pre = tree[i];
               }
           printf("%d\n", count);
        }
    return 0;
}

















