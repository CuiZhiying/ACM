#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXN 110000
int a[MAXN][2], b[MAXN][2], esize;
void Merge(int left, int mid, int right)
{
    int i, j, k;
    memcpy(b + left, a + left, esize * (right - left + 1));
    for(i = left, j = mid + 1, k = i; i <= mid && j <= right; k ++)
    {
        if(b[i][0] <= b[j][0])
            memcpy(a[k], b[i ++], esize);
        else
            memcpy(a[k], b[j ++], esize);
    }
    while(i <= mid) memcpy(a[k ++], b[i ++], esize);
    while(j <= right) memcpy(a[k ++], b[j ++], esize);
}
void Merge_Sort(int left, int right)
{
    if(left < right)
    {
        int mid = left + right >> 1;
        Merge_Sort(left, mid);
        Merge_Sort(mid + 1, right);
        Merge(left, mid, right);
    }
}        
int main()
{
    int n, i, j;
    esize = sizeof(a[0]);
    while(scanf("%d", &n) != EOF)
    {
        for(i = 0; i < n; i ++)
            scanf("%d%d", &a[i][0], &a[i][1]);
        Merge_Sort(0, n - 1);
        for(i = 0; i < n; i ++)
            printf("%d %d\n", a[i][0], a[i][1]);
    }
    return 0;
}
