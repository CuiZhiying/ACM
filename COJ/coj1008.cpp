# include <stdio.h>
# include <memory.h>

# define MAXN 100005

unsigned short s[MAXN];
int top;

int main() {
	int n, x, i, f, t, tot, top;

	while (~scanf("%d", &n)) {
		f = top = tot = 0;
		memset(s, 0, sizeof(s));
		if (n) scanf("%d", &f);
		t = f;                  //保留第一位 
		s[++top] = 1;                //s是栈，每一位存储连续的相同数量 
		for (i = 1; i < n; ++i) {
			scanf("%d", &x);
			if (f ^ x) {
				f = x;                      //保留当前位  
				if (i%2 && top) {               //如果能变化,i+1是偶数并且栈的长度大于0 
					if (top > 1)                //如果栈的长度大于一 
					{
						s[top-1] += s[top]+1;      //前一个连续区与这一个连续区合并 
						--top;
					} 
					else                      
					{
						++s[top];               //如果栈的长度等于一则将该连续区的加一，把第一位数的值变化 
						t = !t;
					}
				}
				else s[++top] = 1;          //如果不能变化则新开辟一个连续区 
			}
			else ++s[top];              //如果相同则该连续区数量加一 
		}
		if ((top%2) == t) --top;              //如果连续区数量模2等于t,则 表明当前区是1的个数 
		while (top > 0) {
			tot += s[top];
			top -= 2;
		}
		printf("%d\n", tot);
	}

	return 0;
}
