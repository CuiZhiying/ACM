#include<cstdio>
#include<queue>
using namespace std;
struct node
{
   int a;
   friend bool operator<(node aa,node bb)
   {
       return aa.a>bb.a;
   }
};
int main()
{
    int n,t,a,sum;
    node bb,aa;
    scanf("%d",&t);
    while(t--)
    {
        priority_queue<node>q;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            bb.a=a;
            q.push(bb);
        }
        sum=0;
        while(!q.empty())
        {
            aa=q.top(); q.pop();
            if(n==1)  break;
            bb=q.top(); q.pop();
            n--;
            aa.a+=bb.a;
            sum+=aa.a;
            q.push(aa);
        }
        printf("%d\n",sum);
    }
    return 0;
}
 
/**************************************************************
    Problem: 1588
    User: aking2015
    Language: C++
    Result: Accepted
    Time:92 ms
    Memory:1064 kb
****************************************************************/
