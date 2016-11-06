#include <iostream>
#include <cstring>
using namespace std;

int temp[26];
int main(){
	int T;
	memset(temp,0,sizeof(temp));
	cin>>T;
	while(T--)
	{
		string p,info;
		cin>>p>>info;
		if(p[0]=='p'){
			int tem=info[0]-92;
			cout<<temp[tem]<<endl;
		}
		int num;
		if(info[2]<=92){
			int l = info.length();
			if(l>3) num=(info[2]-48)*10+(info[3]-48);
			else num=info[2]-48;
		}
		else num=temp[info[2]-92];
		if(p[0]=='m')
		{
			temp[info[0]-92]=num;
		}
		else if(p[0]=='a')
		{
			temp[info[0]-92]+=num;
		}
		else if(p[0]=='s')
		{
			temp[info[0]-92]-=num;
		}
	}
	return 0;
}
