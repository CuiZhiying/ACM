/*
 * =====================================================================================
 *
 *       Filename:  shusucao.c
 *
 *    Description:  ACM training素数槽问题 I'm sorry, I was failed!
 *
 *        Version:  1.0
 *        Created:  05/26/2016 01:05:53 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
int is_sushu(int n)
{   int state;
    int i;
    if( n == 2)
        return 1;
    else{
        for( i = 2 ; i < n; i++)
            if(!(n%i))
                return 0;
        return 1;
        }
}
int main()
{   int n;
    int input;
    int reslut;
    int upper;
    int lower;
    int i;
    freopen("input.txt", "r", stdin);
    while( scanf("%d", &n) != EOF && n>0 )
        while(n--){
            scanf("%d", &input);
            if( is_sushu(input))
                printf("%d\n", 0);
            else{
                for( i = input+1; !is_sushu( i ); i++);
                upper = i;
                for( i = input - 1; !is_sushu(i); i--);
                lower = i;
                printf("%d\n", upper - lower);
            }
               
        }
    return 0;
}
/*
int sushu[100010];
int main()
{   int n;
    int input;
    int result;
    int i;
    int j;
    int state;

    freopen("input.txt", "r", stdin);
    sushu[0] = 2;
    for( input = 3,i = 1; input < 1299720; input++){            //find out all the sushu and store it on the array;
        state = 1;
        for(j = 2; j < input; j++)
            if( !(input % j) ){
                state = 0;
                break;
            }
        if(state)
            sushu[i++] = input;
    }
    //for(i = 0; i<100000; i++)
    //    printf("%d\t", sushu[i]);
    //while(scanf()
    while(scanf("%d", &n)!= EOF && n){
        while(n--){
            scanf("%d", &input);
            for(i = 0; sushu[i]<input; i++);
            if(sushu[i] == input )
                printf("%d\n",0);
            else
                printf("%d\n", sushu[i]-sushu[i-1]);
        }
    }
    return 0;
}

*/

















