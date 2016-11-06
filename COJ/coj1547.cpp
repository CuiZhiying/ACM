#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 1e4 + 10;
int width[N], dp[N];
int main() {
    //freopen("in.txt", "r", stdin);
    int T, n;
    int a, b;
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &n);
        int ans = 0, cnt = 0;
        int sum = 0;
        for(int i = 0; i < n; i++) {
            scanf("%d%d", &a, &b);
            if(a == 2) {
                ans += b;
            }else {
                width[cnt++] = b;
                sum += b;
            }
        }
        sort(width, width + cnt);
        memset(dp, 0, sizeof(dp));
        for(int i = 0; i < cnt; i++) {
            for(int j = sum/2; j >= width[i]; j--) {
                dp[j] = max(dp[j], dp[j-width[i]] + width[i]);
            }
        }
        printf("%d\n", ans + max(dp[sum/2], sum-dp[sum/2]));
    }
    return 0;
}
