/*
 * =====================================================================================
 *
 *       Filename:  er.c
 *
 *    Description:  ACM training find out the parent of two point
 *
 *        Version:  1.0
 *        Created:  05/29/2016 10:26:08 AM
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
{   int a, b;
    int a_parent[1000000];
    int b_parent[1000000];
    int i, j;
    freopen("input.txt", "r", stdin);
    while( scanf("%d %d", &a, &b) != EOF ){
        i = 0;
        j = 0;
	a_parent[0] = a;
	b_parent[0] = b; 
        while( a != 0 ){
           a_parent[++i] = a/2;        
           a = a/2;            
        }                          
        while( b != 0 ){             
           b_parent[++j] = b/2;        
           b = b/2;                  
        }                         
        while( a_parent[i] == b_parent[j] && i > -1 && j > -1 ){
		i--;
		j--;
	}
        printf("%d\n", a_parent[i+1]);  
    }                                   
    return 0;                           
}              





























