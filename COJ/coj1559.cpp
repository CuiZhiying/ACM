#include <iostream>
#include <cmath>

using namespace std;
typedef struct{
	int man;
	int jian;
}M_J;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,M,sum=0;
		cin>>N>>M;
		M_J mj[N];
		for(int i=0;i<N;i++){
			cin>>mj[i].man>>mj[i].jian;
			int j=i;
			while(j!=0&&mj[j].man<mj[j-1].man)
			{
			    M_J temp;
				temp=mj[j];
				mj[j]=mj[j-1];
				mj[--j]=temp;
			}
		}
		int price;
		for(int j=0;j<M;j++)
		{
			cin>>price;
			sum+=price;
			int i=0;
			for(;i<N;i++)
			{
				if(price>=mj[i].man) continue;
				else break;
			}
			if(i>=1) sum-=mj[i-1].jian;
		}
		cout<<sum<<endl;
	}
	return 0;
}
