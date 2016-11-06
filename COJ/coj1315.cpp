#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct node
{
    int num;
    int t;
} ans[30];

int cmp(node x,node y)
{
    if(x.t !=y.t)
        return x.t<y.t;
    return x.num<y.num;
}

int main()
{
    int n,i,j,sum,k;
    while(cin>>n)
    {
        for(i = 0; i<n; i++)
        {
            cin>>ans[i].t;
            ans[i].num = i+1;
        }
        sort(ans,ans+n,cmp);
        sum = 0;
        k = 0;
        for(i = 0; i<n; i++)
        {
            if(k+ans[i].t>300)
                break;
            k+=ans[i].t;
        }
        int f = i,tem = i;
        for(i = 0; i<f; i++)
        {
            sum += ans[i].t*tem--;
        }
        cout<<f<<" "<<sum<<endl;
        for(i = 0; i<f; i++)
        {
            cout<<ans[i].num<<endl;
        }
    }
    return 0;
}

