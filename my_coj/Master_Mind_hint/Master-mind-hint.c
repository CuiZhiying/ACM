/*
 * =====================================================================================
 *
 *       Filename:  Master-mind-hint.c
 *
 *    Description:  This is a practice for input and output.
 *
 *        Version:  1.0
 *        Created:  05/22/2016 03:18:01 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define maxn 1010
#define true 1
int main()
{   int num;
    int a[maxn],b[maxn];
    int kase;
    int i;
    int n;
    int A, B;
    int c1,c2;
    
    freopen("input.txt", "r", stdin);
    kase = 0;
    while( scanf("%d",&n) == 1 && n){
        printf("Game %d:\n", ++kase);
        for( i = 0; i < n; i++ )
            scanf("%d", &a[i]); 
        while( true ){
            A = 0;
            B = 0;
            for( i = 0; i < n; i++ ){
                scanf("%d", &b[i]);
                if( a[i] == b[i] )
                    A++;
            }
            if( b[0] == 0 )
                break;
            for( num = 1; num<=9; num++ ){
                c1 = 0;
                c2 = 0;
                for( i = 0; i<n; i++ ){
                    if( a[i] == num )
                        c1++;
                    if( b[i] == num )
                        c2++; 
                 }
                 if( c1 < c2 )
                     B += c1;
                 else
                     B += c2;
            }
            printf("    (%d,%d)\n", A,B-A);
        }
    }
    return 0;
}

