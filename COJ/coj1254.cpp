#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int a[1200];
    int i,n,j;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
            cin>>a[i];
        int max=*max_element(a,a+n);
        int ans=0;
        sort(a+1,a+n);
        for(i=n-1,j=1;i>=1;i--,j++)
            a[i]=a[i]+j*5;
        int max2=*max_element(a,a+n);
        ans+=max2;
        cout<<ans<<endl;
    }
    return 0;
}
