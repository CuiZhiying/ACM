#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<cmath>
#define Mod 1000000007
#define ll long long

using namespace std;

ll pow_mod(ll a,ll b) {
    ll res=1;
    while(b) {
        if(b&1)
            res*=a,res%=Mod;
        a*=a;
        a%=Mod;
        b>>=1;
    }
    return res;
}
ll n,m;

int main() {
    while(~scanf("%lld%lld",&n,&m)) {
        ll ans=0;
        for(int i=1; i<=n; i++) {
            ans+=pow_mod(i,m);
            ans%=Mod;
        }
        printf("%lld\n",ans);
    }
}
