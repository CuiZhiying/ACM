#include <cstdio>
#include <cstdlib>
typedef long long LL;
int main() {
	int T;
	scanf("%d",&T);
	while(T--) {
		LL A,B,C;
		scanf("%I64d%I64d%I64d",&A,&B,&C);
		LL t;
		if(A>=0&&B>=0&&C<0) printf(">\n");
		else if(A<0&&B<0&&C>=0) printf("<\n");
		else if(A>=0&&C>0||A<0&&C<0)
		{
			t=C-A;
			if(B>t) printf(">\n");
			else if(B==t) printf("=\n");
			else printf("<\n");
		}
		else{
			t=A+B;
			if(t>C) printf(">\n");
			else if(t==C) printf("=\n");
			else printf("<\n");
		}
	}
	return 0;
}
