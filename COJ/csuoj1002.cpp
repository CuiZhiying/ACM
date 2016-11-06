#include<iostream>  
#include<string>  
#include<cstdio>  
using namespace std;  
  
int main()  
{  
    string a,b;  
    int num,sum[1000];  
    while(cin>>a>>b)
	{
		if(1==a.length () && 1==b.length()  && a[0]=='0' && b[0]=='0') return 0;
		int m=0,n=0,temp=0,i,k;  
        int q=0; 
        i=a.length();  
        k=b.length(); 
        i=i-1;  
        k=k-1; 
        while(i>=0 && k>=0)
        {  
            m=a[i]-'0';
            n=b[k]-'0';
          
            sum[q++]=(temp+m+n)%10; 
            temp=(temp+m+n)/10; 
            i--;  
            k--;  
        }    
      if(i>k)  
      {  
          while(i>=0)  
          {  
               
             m=a[i]-'0';  
             sum[q++]=(temp+m)%10;  
             temp=(temp+m)/10;
             i--;  
          }  
      }  
      if(k>i)  
      {  
         while(k>=0)  
          {  
             m=b[k]-'0';  
             sum[q++]=(temp+m)%10;   
             temp=(temp+m)/10;  
             k--;  
          }  
      }  
      sum[q]=temp;    
      if(sum[q]!=0) cout<<sum[q];  
          for(--q;q>=0;q--)  
          cout<<sum[q];  
      cout<<endl;  
	}  
          
 return 0;  
} 
