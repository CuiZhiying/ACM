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
		t = f;                  //������һλ 
		s[++top] = 1;                //s��ջ��ÿһλ�洢��������ͬ���� 
		for (i = 1; i < n; ++i) {
			scanf("%d", &x);
			if (f ^ x) {
				f = x;                      //������ǰλ  
				if (i%2 && top) {               //����ܱ仯,i+1��ż������ջ�ĳ��ȴ���0 
					if (top > 1)                //���ջ�ĳ��ȴ���һ 
					{
						s[top-1] += s[top]+1;      //ǰһ������������һ���������ϲ� 
						--top;
					} 
					else                      
					{
						++s[top];               //���ջ�ĳ��ȵ���һ�򽫸��������ļ�һ���ѵ�һλ����ֵ�仯 
						t = !t;
					}
				}
				else s[++top] = 1;          //������ܱ仯���¿���һ�������� 
			}
			else ++s[top];              //�����ͬ���������������һ 
		}
		if ((top%2) == t) --top;              //�������������ģ2����t,�� ������ǰ����1�ĸ��� 
		while (top > 0) {
			tot += s[top];
			top -= 2;
		}
		printf("%d\n", tot);
	}

	return 0;
}
