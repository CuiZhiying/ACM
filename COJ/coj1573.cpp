#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	string str;
	while(cin>>str)
	{
		int count[10];
		memset(count,0,sizeof(count));
		for(int i=0;i<str.length();i++)
		{
			switch(str[i])
			{
				case '0':
					count[0]++;
					break;
				case '1':
					count[1]++;
					break;
				case '2':
				    count[2]++;
				    break;
				case '3':
					count[3]++;
					break;
				case '4':
					count[4]++;
					break;
				case '5':
					count[5]++;
					break;
				case '6':
					count[6]++;
					break;
				case '7':
					count[7]++;
					break;
				case '8':
					count[8]++;
					break;
				case '9':
					count[9]++;
					break;
			}
		}
		int max=0;
		for(int i=0;i<10;i++)
		{
			if(count[max]<count[i])
			{
				max=i;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}
