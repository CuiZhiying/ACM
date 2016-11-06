#include<stdio.h>
#include<string.h>
#include<vector>
#define N 1005
using namespace std;

vector<int> g[N];
char vis[N];

int bfs(int u)
{
    int cx, nx, ret = 0;
    int Q[N], front, rear;
    memset(vis, 0, sizeof(vis));
    Q[1] = u;
    vis[u] = 1;
    front = 1;
    rear  = 2;
    while(front < rear){
        cx = Q[front++];
        for(int i = 0; i < g[cx].size(); i++){
            nx = g[cx][i];
            if (!vis[nx]){
                Q[rear++] = nx;
                vis[nx] = 1;
                ret++;
            }
        }
    }
    return ret;
}

int main()
{
    int n, k, m;
    while(cin>>n>>k>>m){
        int u, v;
        for(int i = 1; i <= n; i++)
            g[i].clear();
        for (int i = 0; i < m; i++){
            cin>>u>>v;
            g[u].push_back(v);
        }
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(bfs(i) >= n-k)
                cnt++;
            if(cnt >= k)
                break;
        }
        if(cnt >= k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
