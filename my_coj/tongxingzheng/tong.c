/*
 * =====================================================================================
 *
 *       Filename:  tong.c
 *
 *    Description:  ACM selecting
 *
 *        Version:  1.0
 *        Created:  06/05/2016 03:14:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 */
#include <stdio.h>  
#include <string.h>
//using namespace std;  
  
const int maxind = 256;  
int segTree[ 1034];  
int array[256];   
/* 构造函数，得到线段树 */  
void build(int node, int begin, int end)    
{    
    if (begin == end)    
        segTree[node] = array[begin]; /* 只有一个元素,节点记录该单元素 */  
    else    
    {     
        /* 递归构造左右子树 */   
        build(2*node, begin, (begin+end)/2);    
        build(2*node+1, (begin+end)/2+1, end);   
           
        /* 回溯时得到当前node节点的线段信息 */    
        if (segTree[2 * node] <= segTree[2 * node + 1])    
            segTree[node] = segTree[2 * node];    
        else    
            segTree[node] = segTree[2 * node + 1];    
    }    
}  
  
int main()  
{   int i;  
    memset(array, 1, sizeof(array[maxind]));
    //array[0] = 1, array[1] = 2,array[2] = 2, array[3] = 4, array[4] = 1, array[5] = 3;  
    build(1, 0, 5);  
    for( i = 1; i<=20; ++i)  
       //cout<< "seg"<< i << "=" <<segTree[i] <<endl;  
       printf("seg %d = %d\n", i, segTree[i]);
    return 0;
}
