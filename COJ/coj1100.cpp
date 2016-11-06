#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string word;
		cin>>word;
		if(word.size()==3)
		{
			if((word[0]=='o'&&word[1]=='n')||(word[1]=='n'&&word[2]=='e')||(word[0]=='o'&&word[2]=='e'))
			{
				cout<<"1"<<endl;
			}
			else
			{
				cout<<"2"<<endl;
			}
		}
		else
		{
			cout<<"3"<<endl;
		}
	}
	return 0;
} 
