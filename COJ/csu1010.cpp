#include<iostream> 
#include<cstring>
#define maxn 100010
using namespace std;
int pre[maxn], dis[maxn];
int main()
{
	int n;
	while(cin>>n) {
		int x, y, i, ans, md;
		memset(dis, 0, sizeof(dis));
		for(i = 0; i < n; i++)
			pre[i] = i;
		for(i = 0; i < n; i++) {
			scanf("%d %d", &x, &y);
			pre[y] = x;
			dis[x] = 1;
		}
		
		for(md = n + 1, ans = i = 0; i <= n; i++) { 
		    //dis[i]=0��˵��iû���ӽڵ� 
			if(!dis[i]) {	
				x = i; 
				while(pre[x] != x) {
					x = pre[x];
					dis[i]++;
				}
				//�ҳ�������С�Ķ���ĩβ 
				if(!x && dis[i] < md) {
					md = dis[i];
					ans = i;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

