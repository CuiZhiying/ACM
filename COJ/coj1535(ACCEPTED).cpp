//��ÿ���������дһ��,���ҹ���
������Aϲ���������ٵ�,Bϲ����������.����ÿ��A��ѡ���������ų���,Ȼ��Bѡ������С�ĳ���,Ȼ����Ҵ�����ѡһ���ų�,���ѭ����,ʹ��ѡ�ĺ��뱣�������.

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
