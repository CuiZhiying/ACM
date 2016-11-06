/*
 * =====================================================================================
 *
 *       Filename:  threeNum.c
 *
 *    Description:  三个数字
 *
 *        Version:  1.0
 *        Created:  06/03/2016 08:15:52 PM
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

#define Max 100000

void swap( char array[], int i, int j)
{   int  temp;
    temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

int main()
{   char input[Max];
    int i;
    int head, tail;
    int len;
    int temp;
    while( scanf("%s", input) != EOF ){
        len = strlen(input);
        head = -1;
        tail = len;
        
        for( i = 0; i < tail; i++){
            if( input[i] == '2' ){
                head++;
                swap( input, head, i );
            }               
        }
        for( i = tail - 1; i > head; i--){
            if( input[i] == '3' ){
                tail--;
                swap( input, tail, i);
            }
        }
        for( i = 0; i < len; i++ )
            printf("%c", input[i]);
        printf("\n");
    }
    return 0;
}

