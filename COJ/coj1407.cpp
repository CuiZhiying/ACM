#include<iostream>
#include<cstring>   
#include<iomanip> 
#include<algorithm>  
#include<cmath>  
using namespace std; 
 
double abs(double x)  
{  
  
}  
int main()  
{  
    double x1[205],x2[205],v1[205],y1[205],y2[205];  
    double  v2[205],v3[205],v4[205],sum,n,b,m,s,c,a;  
    int t,i;  
    cin>>t;  
    while(t--)  
    {  
        i=0;  
        cin>>x1[i]>>y1[i]>>v1[i]>>v2[i]>>x2[i]>>y2[i]>>v3[i]>>v4[i];  
        b=(v3[i]-v1[i])*(x2[i]-x1[i])+(y2[i]-y1[i])*(v4[i]-v2[i]);  
        b=b*2;  
        c=pow(x2[i]-x1[i],2)+pow(y2[i]-y1[i],2);  
        a=pow(v3[i]-v1[i],2)+pow(v4[i]-v2[i],2);  
        if((v3[i]-v1[i])*(x2[i]-x1[i])+(y2[i]-y1[i])*(v4[i]-v2[i])>=0)  
        {  
            sum=sqrt(pow(y1[i]-y2[i],2)+pow(x1[i]-x2[i],2));  
            cout<<fixed<<setprecision(8)<<sum<<endl;
        }  
        else  
        {  
            sum=sqrt((4*a*c-b*b)/(4*a));  
            cout<<fixed<<setprecision(8)<<sum<<endl;
        }  
    }
	return 0;  
} 
