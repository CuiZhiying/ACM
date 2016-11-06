/*
 * =====================================================================================
 *
 *       Filename:  Circu.c
 *
 *    Description:  ACM test to deel with circle string
 *
 *        Version:  1.0
 *        Created:  05/22/2016 04:55:10 PM
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
#define maxn 105

int isSmaller(const char *s, int p, int q)
{   int i;
    int n = strlen(s);
    for( i = 0; i < n; i++ )
        if( s[ (p+i)%n ] != s[(q+i)%n] )
            return s[(p+i)%n] < s[(q+i)%n];
    return 0;
}
int main()
{   int T;
    int i;
    char s[maxn];
    int ans;
    int n;
    scanf("%d", &T);
    while( T-- ){
        scanf("%s", s);
    ans = 0;
    n = strlen(s);
    for(i = 1; i<n; i++)
        if( isSmaller(s, i, ans ))
            ans = i;
    for(i = 0; i < n; i++)
        putchar( s[(i+ans)%n] );
    putchar('\n');
    }

    return 0;
}

















