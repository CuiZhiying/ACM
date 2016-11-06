/*
 * =====================================================================================
 *
 *       Filename:  cankao.c
 *
 *    Description:  芷水
 *
 *        Version:  1.0
 *        Created:  07/16/2016 12:14:38 AM
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
    int n,m;
    freopen("input.txt", "r", stdin);
    while(scanf("%d%d",&n,&m)>0)
    {
        if(n==m)
        {
            printf("%d\n",n);
            continue;
        }
        while(n!=m)
        {
            if(n>m) n=n/2;
            else m=m/2;
        }
        printf("%d\n",n);
    }
    return 0;
}
