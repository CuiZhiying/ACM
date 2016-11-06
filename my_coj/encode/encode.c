/*
 * =====================================================================================
 *
 *       Filename:  encode.c
 *
 *    Description:  ACM traning simple encode
 *
 *        Version:  1.0
 *        Created:  05/27/2016 03:54:01 PM
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
    int text;
    int key;
    int product;
    freopen("input.txt", "r", stdin);
    while( scanf("%d", &n) != EOF && n > 0)
        while( n-- ){
            scanf("%d %d", &text, &key);
            product = text * key % 10000;

            printf("%d", product/1000);
            product = product % 1000;
            printf("%d", product / 100);
            product = product % 100;
            printf("%d", product / 10);
            printf("%d", product % 10);
            printf("\n");
        }
    return 0;
}
