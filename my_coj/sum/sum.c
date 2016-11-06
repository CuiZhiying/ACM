/*
 * =====================================================================================
 *
 *       Filename:  sum.c
 *
 *    Description:  ACM training
 *
 *        Version:  1.0
 *        Created:  06/05/2016 12:20:05 AM
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
{   int N;
    int ah[50000], al[50000];
    int bh[50000], bl[50000];
    int resulth[50000],resultl[50000];
    int i, j;
    int carry;
    freopen("input.txt", "r", stdin);
    while( scanf("%d", &N) != EOF ){
        if( N <= 500000 ){
        for( i = 0; i < N; i++)
            scanf("%d %d", &ah[i], &bh[i]);
        for( carry = 0, j = N-1; j >= 0; j-- ){
            resulth[j] = (ah[j] + bh[j] + carry) % 10;
            if( (ah[j] +bh[j] + carry) / 10 )
                carry = 1;
            else 
                carry = 0;
        }
        if(carry){
            printf("1");
            for( i = 0; i < N; i++)
                printf("%d", resulth[i]);
            printf("\n");
        }else{
            i = 0;
            while( !resulth[i] )
                i++;
            for(; i < N; i++)
                printf("%d", resulth[i]);
            printf("\n");
        }
        }else{
            for( i = 0; i < 500000; i++)
                scanf("%d %d", &ah[i], &bh[i]);
            for( i = 0; i < N - 500000; i++)
                scanf("%d %d", &al[i], &bl[i]);
            for( carry = 0, i = N - 500000 - 1; i>=0; i--){
                resultl[i] = (al[i] + bl[i] + carry)%10;
                if( (al[i] + bl[i] + carry) / 10 )
                    carry = 1;
                else 
                    carry = 0;
            }
            for( i = 500000 - 1; i >= 0; i++ ){
                resulth[i] = (ah[i] + bh[i] + carry)%10;
                if( (al[i] + bl[i] + carry) / 10 )
                    carry = 1;
                else
                    carry = 0;
            }
            if( carry )
                printf("1");
            for( i = 0; i < 500000; i++)
                printf("%d", resulth[i]);
            for( i = 0; i < N - 500000; i++)
                printf("%d", resultl[i]);
            printf("\n");
        }
    }
    return 0;
}











