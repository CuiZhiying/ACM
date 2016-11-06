#include <iostream>
#include <queue>
#include <cstring>

bool visit[1001];
using namespace std;

bool bfs(int S,int s,int i,queue <int> map[]) {
	queue <int> Q;
	Q.push(i);
	int vn,vm;
	while(!Q.empty()) {
		vn=Q.front();
		Q.pop();
		queue <int> q;
		while(!map[vn].empty()) {
			vm=map[vn].front();
			q.push(vm);
			map[vn].pop();
			s++;
			if(s>S) {
				while(!q.empty()) {
					map[vn].push(q.front());
					q.pop();
				}
				return true;
			}
			
			if(!visit[vm]) Q.push(vm);
			visit[vm]=true;
		}
		while(!q.empty()) {
			map[vn].push(q.front());
			q.pop();
		}
	}
	return false;
}
int main()

{
	int N,K,M;
	while(cin>>N>>K>>M) {
		queue <int> MAP[N+1];
		while(M--) {
			int a,b;
			cin>>a>>b;
			MAP[a].push(b);
		}
		int count=0;
		for(int i=1; i<N+1; i++) {
			memset(visit,false,sizeof(visit));
			int s=1;
			if(bfs(N-K,s,i,MAP)==true) count++;
			if(count>=K) break;
		}
		if(count>=K) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
