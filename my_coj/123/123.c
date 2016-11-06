/*
 * =====================================================================================
 *
 *       Filename:  123.c
 *
 *    Description:  ACM training to recover 123
 *
 *        Version:  1.0
 *        Created:  05/26/2016 12:27:36 AM
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
int main()
{   int n;
    char word[6];
    int i;
    int len;
    int state;
    int result;
    const char *num[] = {"one", "two", "three"};
    freopen("input.txt","r",stdin);
    while( scanf("%d", &n) != EOF && n > 0 ){
        while( n-- ){
           //printf("%d\t", n);
           scanf("%s", word);
           //printf("%d\n", strlen(word));
           if(strlen(word) == 5){
               printf("%d\n", 3);
               continue;
           }
           for(i = 0,state = 0; i < 3; i++)
               if(num[0][i] == word[i])
                   state++;
           if(state>=2){
                   printf("%d\n",1);
                   continue;
           }
           for( i = 0, state = 0; i<3; i++)
                if(num[1][i] == word[i])
                   state++;
           if(state>=2){
                printf("%d\n",2);
                continue;
           }   
        }
    }
    return 0;
}
