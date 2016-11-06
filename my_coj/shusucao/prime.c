/*
 * =====================================================================================
 *
 *       Filename:  prime.c
 *
 *    Description:  how to quick find out all the prime
 *
 *        Version:  1.0
 *        Created:  05/26/2016 10:12:45 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int prime[1299720];
void init_prime()
{   unsigned int i;
    unsigned int j;
    for( i = 1; i < 1299710; i++)
        prime[i] = 1;
    for( i = 2; i < 1299710; i++){
        if( prime[i] == 1 )
            for( j = i; i*j < 1299710; j++ )
                prime[i*j] = 0;
    }
/*
    for(i = 0; i < 1299710; i++)
        if(prime[i] == 1)
            printf("%d\t", i);
*/
    return;
}
int main()
{   int n;
    long int input;
    long int i;
    long int j;
    long int upper;
    long int lower;
    init_prime();
    freopen("input.txt", "r", stdin);
    while( scanf("%d", &n) != EOF )
        while( n-- ){
            scanf("%ld", &input);
            if(prime[input] == 1)
                printf("%d\n",0);
            else{
                for( upper = input+1; prime[upper] == 0; upper++);
                for( lower = input-1; prime[lower] == 0; lower--);
                printf("%ld\n", upper -lower);
            }
        }
   return 0;
}
























