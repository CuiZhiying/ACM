#include<iostream>
#include<cstring>
#include<vector>
#include<queue>
#define N 1005

using namespace std;

vector<int> Map[N];
char visit[N];

int bfs(int u)
{
    int vm, vn, r = 0;
    queue <int> Q;
    memset(visit, 0, sizeof(visit));
    Q.push(u);
    visit[u] = 1;
    while(!Q.empty()){
        vm = Q.front();
        Q.pop();
        for(int i = 0; i < Map[vm].size(); i++){
            vn = Map[vm][i];
            if (!visit[vn]){
                Q.push(vn);
                visit[vn] = 1;
                r++;
            }
        }
    }
    return r;
}

int main()
{
    int n, k, m;
    while(cin>>n>>k>>m){
        int u, v;
        for(int i = 1; i <= n; i++)
            Map[i].clear();
        for (int j = 0; j < m; j++){
            cin>>u>>v;
            Map[u].push_back(v);
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
