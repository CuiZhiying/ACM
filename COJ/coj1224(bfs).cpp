#include <iostream>
#include <cstring>
#include <queue>
#include <cmath>

using namespace std;

struct Pos
{
    int x;
    int y;
};
Pos jpos;
Pos mpos;
queue <Pos> q;
int n,m;
int vis[22][22];
int dirx[8]={1, 1, -1,-1, 2, 2,-2,-2};
int diry[8]={2, -2, -2,2,1,-1,1,-1};
int bfs(Pos disti,Pos start)
{
    int cnt=0,nx,ny;
    q.push(start);
    Pos p,l;
    while(!q.empty())
    {
        l=q.front();
        cnt=++vis[l.x][l.y];
        q.pop();
        for(int i=0;i<8;i++)
        {
            nx=l.x+dirx[i];
            ny=l.y+diry[i];
            if(nx>0 && n>=nx && ny>0&&ny<=m && vis[nx][ny]==-1)
            {
                if(l.y-ny==-2&&l.x==disti.x) continue;
                if(l.y-ny== 2&&l.x==disti.x) continue;
                if(l.y-ny==-1&&l.y==disti.y) continue;
                if(l.y-ny== 1&&l.y==disti.y) continue;
                p.x=nx;
                p.y=ny;
                vis[p.x][p.y]=cnt;
                q.push(p);
            }
        }
    }
    return vis[disti.x][disti.y]--;
}


int main()
{
    while(cin>>n>>m>>jpos.x>>jpos.y>>mpos.x>>mpos.y)
    {
        memset(vis,-1,sizeof(vis));
        vis[mpos.x][mpos.y]=0;
        bfs(jpos,mpos);
        if(vis[jpos.x][jpos.y]==-2) cout<<"-1"<<endl;
        else cout<<vis[jpos.x][jpos.y]<<endl;
    }
    return 0;
}
