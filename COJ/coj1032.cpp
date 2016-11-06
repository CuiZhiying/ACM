#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int count_0=0,count_c=0,count_300=0,count_50=0;
		double D,M,L,Acc,num,sum_sc=0,acc_300,acc_50,hsum=0;
		cin>>D>>M>>L;
		for(int i=0;i<L;i++)
		{
			cin>>num;
            sum_sc+=num+num*((count_c>1?count_c-1:0)*D*M)/25; 
			if(num==300) count_300++;
			if(num==50 ) count_50++;
			if(num!=0)
			{
				count_c++;	
			}
			else 
			{
				count_c=0;count_0++;
			}
			hsum+=num;
		}
		Acc=(double)hsum*100/(L*300);
		acc_300=(double)count_300*100/L;
		acc_50 =(double)count_50*50*100/(L*300);
		if(Acc==100) cout<<fixed<<setprecision(2)<<sum_sc<<" "<<Acc<<"% SS"<<endl;
		else if(acc_300>=90&&acc_50<=1&&count_0==0) cout<<fixed<<setprecision(2)<<sum_sc<<" "<<Acc<<"% S"<<endl;
		else if((acc_300>=80&&count_0==0)||acc_300>=90) cout<<fixed<<setprecision(2)<<sum_sc<<" "<<Acc<<"% A"<<endl;
		else if((acc_300>=70&&count_0==0)||acc_300>=80) cout<<fixed<<setprecision(2)<<sum_sc<<" "<<Acc<<"% B"<<endl;
		else if(acc_300>=60) cout<<fixed<<setprecision(2)<<sum_sc<<" "<<Acc<<"% C"<<endl;
		else cout<<fixed<<setprecision(2)<<sum_sc<<" "<<Acc<<"% D"<<endl;
	}
	return 0;
}
