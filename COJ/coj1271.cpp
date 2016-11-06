#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		string brac;
		cin>>brac;
		int l=brac.length();
		int calc[l],last=0;
		for(int i=0; i<l; i++) {
			if(brac[i]=='(') {
				calc[i]=1;
			} else calc[i]=-1;
			last+=calc[i];
		}     
    	int sum=0;
		int ans=0;
		if(last==-1) {
			for(int i=l-1; i>=0; i--) {
				sum+=calc[i];
				if(sum<0) ans++;
				else if(sum==0) ans=0;
			}
		}
		else if(last==1) {
			for(int i=0; i<l; i++) {
				sum+=calc[i];
				if(sum>0) ans++;
				else if(sum==0) ans=0;
			}
		}
		cout<<ans<<endl;
	}
    return 0;
}
