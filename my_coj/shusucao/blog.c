/*
 * =====================================================================================
 *
 *       Filename:  blog.c
 *
 *    Description:  抄的
 *
 *        Version:  1.0
 *        Created:  06/04/2016 08:59:40 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<cstdio>
#include<cstring>
#include<cstdlib>
#define MAXN 1299720
bool is_p[MAXN];


void calc()
{
    for( int i = 1; i < MAXN; i ++)
        is_p[i] = true;
    is_p[1] = false;
    for( int i = 2; i < MAXN; i ++)
    {
        if( !is_p[i]) continue;
        for( int j = 2; i * j < MAXN; j ++)
            is_p[i * j] = false;
    }
    for( int i = 1; i < MAXN; i++)
        if( is_p[i])
            printf("%d\t",i);
}


int main()
{
    int n, k, cnt;
    calc();
    freopen("input.txt", "r", stdin);
    scanf( "%d", &n);
    while( n --)
    {
        scanf( "%d", &k);
        cnt = 0;
        for( int i = k; !is_p[i]; i ++)
            cnt ++;
        for( int i = k; !is_p[i]; i --)
            cnt ++;
        printf( "%d\n", cnt);
    }
    return 0;
}



