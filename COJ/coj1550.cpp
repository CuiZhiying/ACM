#include <iostream>
#include <cstring>
using namespace std;
int Find(int a[],string str)
{
	for(int i=0;i<str.length();i++)
	{
		switch(str[i])
		{
			case 'A':a[0]++;break;
			case 'B':a[1]++;break;
			case 'C':a[2]++;break;
			case 'D':a[3]++;break;
			case 'F':a[4]++;break;
			case 'G':a[6]++;break;
			case 'H':a[7]++;break;
			case 'I':a[8]++;break;
			case 'J':a[9]++;break;
			case 'K':a[10]++;break;
			case 'L':a[11]++;break;
			case 'M':a[12]++;break;
			case 'N':a[13]++;break;
			case 'O':a[14]++;break;
			case 'P':a[15]++;break;
			case 'Q':a[16]++;break;
			case 'R':a[17]++;break;
			case 'S':a[18]++;break;
			case 'T':a[19]++;break;
			case 'U':a[20]++;break;
			case 'V':a[21]++;break;
			case 'W':a[22]++;break;
			case 'X':a[23]++;break;
			case 'Y':a[24]++;break;
			case 'Z':a[25]++;
		}
	}
}
int main()
{
	string A,B,C;
	while(cin>>A>>B>>C)
	{
		int N=A.length()/2;
		cout<<N;
		int countA[26],countB[26],need[26];
		memset(countA,0,sizeof(countA));
		memset(countB,0,sizeof(countA));
		memset(need,0,sizeof(need));
		Find(countA,A);
		Find(countB,B);
		Find(need,C);
		int flag=0;
		for(int i=0;i<26;i++)
		{
			if((need[i]<=countA[i]&&need[i]<=N)||(need[i]<=countB[i]&&need[i]<=N))
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"NO"<<endl;
		}
		else cout<<"YES"<<endl;
	}
	return 0;
} 
