#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int f[1100050];
int main()
{
    int T, A , B , C , H, X ;
    cin>>T;
    while(T--) {
        cin>>A>>B>>C>>H>>X ;
        memset(f, 0 , sizeof(f));
        int ans1=-1 , ans2 = 0 ;
        for(int i=1; i<=1100000; i++) {
            if(i>=A) f[i] = max(f[i] , f[i-A]+1);
            if(i>=B) f[i] = max(f[i] , f[i-B]+2);
            if(i>=C) f[i] = max(f[i] , f[i-C]+5);
            if(ans1==-1 && f[i]>=H) ans1 = i ;
            if(i<=X) ans2 = max(ans2 , f[i]) ;
            if(ans1!=-1 && i>X) break ;
        }
        cout<<ans1<<endl;
		cout<<ans2<<endl;
    }
	return 0;
}
