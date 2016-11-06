# include <stdio.h>
 
int x, y, r;
int state(int x, int y);   // 1: right, 0: corner, -1: bottom
int main()
{
    long long cnt;      
    while (scanf("%d%d%d", &x, &y, &r))
    {
        if (!(x || y || r)) break;
        cnt = 0;
        x = 1, y = r; 
        while (x <= r && y >= 1)
        {
            if (state(x, y) == 1) ++cnt, --y;
            else if (state(x, y) == 0) cnt += y, ++x, --y;
            else if (state(x, y) == -1) cnt += y, ++x;
        }
        printf("%lld\n", cnt<<2);
    }
    return 0;    }
int state(int x, int y)
{
    int t1, t2;
    --y;
    t2 = r*r;
    t1 = x*x + y*y;
    if (t1 > t2) return 1; 
    if (t1 == t2) return 0;
    if (t1 < t2) return -1;
}
