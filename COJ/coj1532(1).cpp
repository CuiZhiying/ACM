#include <iostream>
#include <cstring>
#include <cmath>
#define MAXN 4587520
using namespace std;
struct Node{
	int l,r;
	int v;
	int add;
}core[MAXN<<2];
int L[MAXN];
int R[MAXN];
int X,S,A,B,C,N,O;

void Build(int u,int left,int right)
{
	core[u].l=left;
	core[u].r=right;
	core[u].v=0;
	core[u].add=0;
	int mid=(core[u].l+core[u].r)>>1;
	Build(L[u],left,mid);
	Build(R[u],mid+1,right);
}

int Query(int u,int left,int right)
{
	if(left<=core[u].l&&core[u].r<=right)
	{
		
	}
}

void Update(int u,int left,int right��int add)
{
	if (left<=core[u].l&&core[u].r <= right){   //����ĳЩ���Ĳ���
	    core[u].v+=core()
	    core[u].add+=add;
        return ; 
	}
	Pushdown(u); // �ɶθ���ʱ������һ�㶼�и���ʱ����
    int mid = (node[u].l + node[u].r)>>1;   //Ȼ��������� ���� ������������ �������е�
	if (right <= mid) Update(L(u),left,right,val);   //�߶��������� 
	else if (left > mid) 
	    Update(R(u),left,right,val);
	else {
	    Update(L(u),left,mid,val);
		Update(R(u),mid+1,right,val);
	}
	Pushup(u); //����Ҳһ���и����ϸ���
 
}
int main()
{
	char cmd;	
	while(cin>>C>>N>>O)
	{
		for(int i=0;i<=C;i++)
		{
			L[i]=i*2+1;
			R[i]=i*2+2;
		}
		Build(0,0,C);
		for(int i=0;i<O;i++)
		{
			cin>>cmd;
			if(cmd=='s')
			{
				cin>>X;
				cout<<Query(0,X)<<endl;
			}
			else if(cmd=='c'){
				cin>>X>>S;
				Update(0,X,X,S);
			}
			else
			{
				cin>>A>>B>>S;
				Update(0,A,B,S);
			} 
		}
	}
} 
