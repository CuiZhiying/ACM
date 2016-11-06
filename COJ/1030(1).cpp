#include<iostream>
#include<cstring>
#include<cstdlib>
#define MAXN 1300000
using namespace std;

bool is_p[MAXN];

void calc()
{
    for( int i = 1; i < MAXN; i ++)
        is_p[i] = true;
    is_p[1] = false;
    for( int i = 2; i < MAXN; i ++)
    {
        if( !is_p[i]) continue;
        for( int j = 2; i * j < MAXN; j ++)
            is_p[i * j] = false;
    }
}

int main()
{
    int n, k, cnt;
    calc();
    cin>>n;
    while( n--)
    {
        cin>>k;
        cnt = 0;
        for( int i = k; !is_p[i]; i ++)
            cnt ++;
        for( int i = k; !is_p[i]; i --)
            cnt ++;
        cout<<cnt<<endl;
    }
    return 0;
}
