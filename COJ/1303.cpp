#include<iostream>  
#include<cstdio>  
#include<cstring>  
using namespace std;  
#define LL long long  
LL gcd(LL a,LL b)  
{  
    if(!b) return a;  
    else return gcd(b,a%b);  
}  
char a[50];  
int main()  
{  
    LL i,m,n,h,k;  
    while(scanf("%s",a)>0)  
    {  
        m=n=h=0;k=1;  
        for(i=2;i<strlen(a);i++)  
        {  
            if(a[i]=='(') break;  
            k*=10;  
            m*=10;  
            m+=a[i]-'0';  
        }i++;  
        for(;i<strlen(a);i++)  
        {  
            if(a[i]==')') break;  
            n*=10;  
            n+=9;  
            h*=10;  
            h+=a[i]-'0';  
        }  
        if(!n) n=1;  
        cout<<m<<" "<<n<<" "<<h<<" "<<k<<endl; 
        m=m*n+h;n*=k; 
		
        k=gcd(m,n);  
        printf("%lld/%lld\n",m/k,n/k);  
    }  
    return 0;  
}  

