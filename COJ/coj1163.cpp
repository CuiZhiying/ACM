#include<stdio.h>  
#include<stdlib.h>  
#include<iostream>  
#include<cmath>  
#include<vector>  
#include<cstring>  
#include<algorithm>  
using namespace std;  
#define LL long long  
int ExGcd(int a, int b, int &x, int &y)  
{  
    if(b == 0)  
    {  
        x = 1;  
        y = 0;  
        return a;  
    }  
    int r = ExGcd(b, a % b, x, y);  
    int t = x;  
    x = y;  
    y = t - a / b * y;  
    return r;  
}  
int a[111111];  
int n,m;  
int main()  
{  
    while(scanf("%d%d",&n,&m) != EOF)  
    {  
        LL x = 1;  
        for(int i = 1 ; i <= n ; i++)  
        {  
            scanf("%lld",&a[i]);  
            x = x * a[i] % m;  
        }  
        int p , q;  
        for(int i = 1 ; i <= n ; i++)  
        {  
            if(ExGcd(a[i],m,p,q) == 1)  
            {  
                 while(p < 0) p += m;  
                 if(i != n)  
                 printf("%d ",(p*x)%m);  
                 else printf("%d\n",p*x%m);  
            }  
        }  
    } 
	return 0; 
}  
