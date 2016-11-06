#include <iostream>
#include <stdio.h>
using namespace std;

const int M=305;
const int MT=300*1000+5;
int p[M];

int isc(int m,int n,int t)  //该时间下能否完成修路任务
{
    int co=1;
    int su=0;
    for(int i=1;i<=m;i++)
    {
        if(p[i]>t)             //每段路必须不长于时间
            return 0;
        if(su+p[i]<=t)
            su+=p[i];
        else
        {
            su=p[i];
            co++;
        }
    }
    return co<=n;
}

int bs(int m,int n)
{
    int lo=0,hi=MT;
    int mid,ans=MT;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        if(isc(m,n,mid))
        {
            ans=min(ans,mid);
            hi=mid-1;
        }
        else
            lo=mid+1;
        printf("%d %d %d\n",ans,hi,mid);
    }
    return ans;
}

int main()
{
    int t,n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&m,&n);
        for(int i=1;i<=m;i++)
            scanf("%d",&p[i]);
        printf("%d\n",bs(m,n));
    }
    return 0;
}
