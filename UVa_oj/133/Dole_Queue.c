#include <stdio.h>

void choose( int *circle, int step, int len, int *origin, int N){
    while(len--){
        *origin = (*origin + step + N)%N;
        if( circle[*origin] == 0 )
            len++;
    }
}

int main()
{   int N, k, m;
    int rest, i, k_chs, m_chs;
    int circle[100];

    freopen("input.txt", "r", stdin);
    while( scanf("%d %d %d", &N, &k, &m) == 3 && N ){
        for(i = 0; i < N; i++)
            circle[i] = 1;
        rest = N;
        i = 0;
        k_chs = -1;
        m_chs = 0;
        do{
            choose( circle, 1,  k, &k_chs, N);
            printf("%3d", k_chs+1);

            choose( circle, -1, m, &m_chs, N);
            circle[k_chs] = circle[m_chs] = 0;
            if( k_chs == m_chs)
                rest--;
            else{
                printf("%3d", m_chs+1);
                rest-=2;
            }
            if( rest )
                putchar(',');
        }while( rest > 0 );
        putchar('\n');
    }
    
    return 0;
}
