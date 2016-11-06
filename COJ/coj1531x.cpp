#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 110;
bool e[maxn][maxn],used[maxn];
int linker[maxn],U,V;
bool dfs(int u) {
    for(int i = 0; i < V; ++i) {
        if(e[u][i] && !used[i]) {
            used[i] = true;
            if(linker[i] == -1 || dfs(linker[i])) {
                linker[i] = u;
                return true;
            }
        }
    }
    return false;
}
int main() {
    int ks,n;
    double x,y;
    scanf("%d",&ks);
    while(ks--) {
        scanf("%d%d%d",&U,&V,&n);
        memset(linker,-1,sizeof(linker));
        memset(e,false,sizeof(e));
        for(int i = 0; i < n; ++i) {
            scanf("%lf %lf",&x,&y);
            e[(int)x][(int)y] = true;
        }
        int ans = 0;
        for(int i = 0; i < U; ++i) {
            memset(used,false,sizeof(used));
            ans += dfs(i);
        }
        printf("%d\n",ans);
    }
    return 0;
}
