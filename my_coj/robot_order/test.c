/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/04/2016 11:11:09 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{   char input[100];
    while( scanf("%s",input) != EOF){
        printf("%d\n", atoi(&input[2]));
    }
    return 0;
}
