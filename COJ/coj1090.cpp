#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;
#define N 1001
int prime[N],cnt;
int step[N];
bool b[N];
int s,t;
void filter()
{
    int i,j;
    for(i=2;i<N;i++)
    {
        if(b[i])
        {
            prime[cnt++]=i;
            for(j=i<<1;j<N;j+=i)    b[j]=false;
        }
    }
}
void init()
{
    memset(b,true,sizeof(b));
    cnt=0;
}
void bfs()
{
    queue<int> q;
    bool success=false;
    int ans,cur,next;
    memset(step,-1,sizeof(step));
    q.push(s);
    step[s]=0;
    while(!q.empty() && !success)
    {
        cur=q.front();
        q.pop();
        if(cur==t)
        {
            success=true;
            ans=step[cur];
        }
        for(int i=0;prime[i]<cur && !success;i++)
        {
            next=cur+prime[i];
            if(next>t)  continue;
            if(step[next]==-1)
            {
                step[next]=step[cur]+1;
                if(next==t)
                {
                    success=true;
                    ans=step[next];
                }
                else    q.push(next);
            }
        }
    }
    if(success) printf("Need %d step(s)\n",ans);
    else    puts("No path!");
}
int main()
{
    init();
    filter();
    while(~scanf("%d%d",&s,&t)) bfs();
    return 0;
}
