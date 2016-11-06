#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char *str;
		cin>>str;
	    char *p;
	    p=NULL;
		p=strstr(str,"alpc");
		int count=0;
		while(p!=NULL) 
		{
			strncpy(p,"bbbb",4);
			count++;
			p=NULL;
			p=strstr(str,"alpc");
		}
		cout<<count<<endl;
	}
	return 0;
}
