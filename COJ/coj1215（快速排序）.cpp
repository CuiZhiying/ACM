#include<stdio.h>
#include<stdlib.h>
#define MAXD 100005

typedef struct aa{
    int a;
    int b;
    int f;
}S;

S t[MAXD];
int N;

int cmp( const void *_p, const void *_q)
{
    S *p = ( S *)_p;
    S *q = ( S *)_q;
    if( p->a == q->a)
        return p->f - q->f;
    return p->a - q->a;
}

int main()
{
    while( scanf("%d", &N) == 1)
    {
        for( int i = 0; i < N; i ++) {
            scanf( "%d%d", &t[i].a, &t[i].b);
            t[i].f = i;
        }
        qsort( t, N, sizeof t[0], cmp);
        for( int i = 0; i < N; i ++)
            printf( "%d %d\n", t[i].a, t[i].b);
    }
    return 0;
}
