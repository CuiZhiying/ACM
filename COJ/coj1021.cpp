#include<iostream>
 
using namespace std;

int Num_Of_Zero(int Num)
{
    int i=0;
    for(int j = Num;j!=0;j/=2)
      {
          int temp = j%2;
          if(temp == 0)
              i++;
          else 
              break;
      }
    return i;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int m,n,Num_Zero = 0;
        cin>>m>>n;     
        for(int i = m-n+1,k = 1;i<=m;i++,k++)
        {
            Num_Zero += Num_Of_Zero(i);
            Num_Zero -= Num_Of_Zero(k);
        }
        cout<<Num_Zero<<endl;
	}
	return 0;
}
