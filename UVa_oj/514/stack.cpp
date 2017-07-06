#include <cstdio>
#include <stack>

using namespace std;

int main()
{
    int len, target[2000];
    int i, end, A, B, ok;
    stack<int> C;

    freopen("input.txt", "r", stdin);
    while( scanf("%d", &len)==1 && len ){
        end = 0;
        while( !end ){
            for( i = 1; i <= len; i++ ){
                scanf("%d", &target[i]);
                if( i==1 && target[i]==0 ){
                    end = 1;break;
                }
            }
            if( end )
                break;

            A = 1, B = 1, ok = 1;
            while( B <= len ){
                if( A == target[B] ){
                    A++;
                    B++;
                }else if( !C.empty() && C.top() == target[B] ){
                    C.pop();
                    B++;
                }else if( A <= len )
                    C.push(A++);
                else{
                    ok = 0;
                    break;
                }
            }
            printf("%s\n", ok ? "Yes" : "No");
        }
        printf("\n");
    }
    return 0;
}
