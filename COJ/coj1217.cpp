#include <stdio.h>
#include <stdlib.h>
 
 
int main()
{
    int i, n;
    int v,a;
    while(scanf("%d", &n)!=EOF)
    {
        v = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a);
            v^= a;
        }      
        printf("%d\n", v);
    }
    return 0;
}

