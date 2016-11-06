//将每种情况都手写一遍,查找规律
题意是A喜欢能量最少的,B喜欢能量最大的.所以每次A先选能量最大的排除掉,然后B选能量最小的除掉,然后该我聪明的选一个排除,多次循环后,使你选的号码保留到最后.

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    int n,m;
    char s[1000];
    int a;
    while(cin>>n>>m)
    {
        for(int i=0;i<n;i++)
        {
            cin>>a>>s;
        }
        if(n/3<m&&m<=(n/3+(n-1)/3)+1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
