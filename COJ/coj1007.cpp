#include<iostream>  
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int x,y,Ax,Bx,Ay,By;
		cin>>x>>y;
		cin>>Ax>>Ay>>Bx>>By;
		if(x>Ax&&x<Bx&&y>Ay&&y<By)
		{
			cout<<"Inside"<<endl;
		}
		else if(x<Ax||x>Bx||y<Ay||y>By)
		{
			cout<<"Outside"<<endl;
		}
		else
		{
			cout<<"On"<<endl;
		}
	}
	return 0;
}
