#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int num[100017];
char s[100017];
int main()
{
    int t;
    int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        int len = strlen(s);
        int tt = 0;
        for(int i = 0; i < len; i++)
        {
            if(s[i]=='(')
                num[i] = 1;
            if(s[i]==')')
                num[i] = -1;
            tt+=num[i];
        }
        int sum = 0;
        int ans = 0;
        if(tt == 1)
        {
            for(int i = 0; i < len; i++)
            {
                sum+=num[i];
                if(sum > 0)
                    ans++;
                else if(sum == 0)
                    ans=0;
            }
        }
        else if(tt == -1)
        {
            for(int i = len-1; i >= 0; i--)
            {
                sum+=num[i];

                if(sum < 0)
                    ans++;
                else if(sum == 0)
                    ans=0;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}

