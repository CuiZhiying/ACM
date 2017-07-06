#include <stdio.h>
#include <math.h>
#include <string.h>

int small[5000];
float repeat[5000];

int main(){
    double num1, in1;
    double num2, in2;
    double rest;
    int INT, len, head, found, end;
    int i, j, k;

    freopen("input.txt", "r", stdin);

    while( scanf("%lf %lf", &in1, &in2) == 2 && in2 != 0 ){
        num1 = in1; num2 = in2;

        memset(small, 0, sizeof(small));
        memset(repeat, 0, sizeof(repeat));

        INT = floor(num1 / num2);         //printf("%d.", INT);
        rest = num1 - INT*num2;
        i = 0;
        found = 0;
        while( 1 ){
            num1 = rest * 10;
            head = floor(num1/num2);
            small[i] = head;
            rest = num1 - head*num2;      //printf("%d", head);
                
            for( j = 0; j < i; j++)
                if( repeat[j] == rest &&  small[i] == small[j]){
                    found = 1;
                    break;
                }
            if(found)
                break;
            repeat[i++] = rest;
        }
        printf("%d/%d = %d.", (int)in1, (int)in2, INT);
        for( k = 0; k < j; k++)
            printf("%d", small[k]);
        printf("(");
        for( k = j; k < i; k++ ){
            printf("%d", small[k]);
            if( k - j + 1 == 50 ){
                printf("...");
                break;
            }
        }
        printf(")\n");
        printf("   %d = number of digits in repeating cycle\n\n", i-j);

    }
    return 0;
}
