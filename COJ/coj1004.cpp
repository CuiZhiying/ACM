#include <iostream>
using namespace std;
int fa[101];

void init()
{
    for(int i =0;i<101;i++)
    {
        fa[i]=i;
    }
}

int find(int x)
{
    while(x!=fa[x])
        x = fa[x];
    return x;
}

void merge(int x,int y)
{
    int a = find(x);
    int b = find(y);
    if(a!=b)
    {
        fa[a]=b;
    }
}
int main()
{
    int T,start,end,n,m;
    cin>>T;
    while(T--)
    {
        init();
        cin>>start>>end>>n;
        for(int i=0;i<n;i++)
        {
            cin>>m;
            int x,y;
            cin>>x;
            for(int i=1;i<m;i++)
            {
                cin>>y;
                merge(x,y);
            }
        }
        if(find(start)!=find(end))
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
     return 0;
}
