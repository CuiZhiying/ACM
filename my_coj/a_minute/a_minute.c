/*
 * =====================================================================================
 *
 *       Filename:  a_minute.c
 *
 *    Description:  ACM training, 就多了两钟
 *
 *        Version:  1.0
 *        Created:  05/25/2016 07:24:04 PM
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
{   int start_hour;
    int start_minute;
    int end_hour;
    int end_minute;
    int total_time;
    int state;
    int count = 0;
    freopen("input.txt", "r", stdin);
    while( scanf("%d %d %d %d", &start_hour, &start_minute, &end_hour, &end_minute) != EOF ){
        total_time = 0;
        count++;
        if( start_hour < end_hour )
            state = 1;
        else if( start_hour == end_hour && start_minute < end_minute )
            state = 1;
        else
            state = 0;
        if( state ){
            if( start_minute > end_minute ){
                total_time += end_minute + 60 - start_minute;
                end_hour--; 
            }else
                total_time += end_minute -start_minute;
            total_time += (end_hour - start_hour) * 60;

            printf("Day %d: %d %d\n", count, total_time%30 ? total_time/30+1 : total_time/30, total_time%30 ? 30-total_time%30 : 0);
        }else
            printf("Day %d: Joking\n", count);
        
    }
    return 0;
}
