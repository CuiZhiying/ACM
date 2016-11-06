#include <iostream>
#include <cstring>
#include <cmath>
#define eps 1e-8
using namespace std;
double e[5];
int df(double a[],int length)
{
    if(length==1)
	{
		cout<<a[0]<<endl;
		return fabs(a[0]-24)<eps;
	 } 
    int cnt=0;double f[5];
    for(int i=0;i<length;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            cnt=0;
            for(int l=0;l<length;l++)
            {
                if(l!=i&&l!=j) f[cnt++]=a[l];
            }
            f[cnt]=a[i]+a[j];
            if(df(f,cnt+1)) return 1;
			
            f[cnt]=fabs(a[i]-a[j]);
            if(df(f,cnt+1)) return 1;
			
            f[cnt]=a[i]*a[j];
            if(df(f,cnt+1)) return 1;
			
            if(a[i]!=0) 
            {
                f[cnt]=a[j]/a[i];
                if(df(f,cnt+1)) return 1;
            }
			
            if(a[j]!=0)
            {
                f[cnt]=a[i]/a[j];
                if(df(f,cnt+1)) return 1;
            }
        }
    }
    return 0;
}
int main()
{
    double a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        e[0]=a;e[1]=b;e[2]=c;e[3]=d;
        if(df(e,4))
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    return 0;
}
