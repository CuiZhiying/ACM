//              A[I]<N	   A[I]=N	    A[I]>N
              
//B[I]<N	     C[I]<=A+B	  C[I]<=A+B	   C[I]<=N+B

//B[I]=N       C[I]<=A+B	  C[I]<=A+B    C[I]<=B+N

//B[I]>N	     C[I]<=A+N	  C[I]<=A+N	   C[I]<=N+N

//�����⣬���ǾͿ����г�9��������ж�c�е�ĳ���ַ����Ƿ��������

#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int A[26], B[26], C[26];
bool flag[26];
char str[200002];
int main()
{
    int i, lenth;
	while (cin >> str)    
	{
	    memset(A, 0, sizeof(A));        
		memset(B, 0, sizeof(B));        
		memset(C, 0, sizeof(C));         
		lenth = strlen(str);        
		for (i=0; i<lenth; i++)        
		{           
		    A[str[i]-'A']++;//ͳ��A�ַ�����ĳ����ĸ�ĸ���        
		}         
		cin >> str;        
		for (i=0; i<lenth; i++)        
		{            
		    B[str[i]-'A']++;//ͳ��B�ַ�������ĸ�ĸ���        
		}         
		cin >> str;        
		for (i=0; i<lenth; i++)        
		{       
	        C[str[i]-'A']++;        
		}         
		memset(flag, true, sizeof(flag));        
		for (i=0; i<26; i++)        
		{            
		    if (A[i] > lenth/2)            
			{            
			    A[i] = lenth/2; //��A��ĳ����ĸ>N�У����Ҳֻ���ṩN������ֵΪN            
			}            
			if (B[i] > lenth/2)            
			{            
			    B[i] = lenth/2;            
			}             
			if (C[i] <= A[i] + B[i])//��c�ַ��������ǣ����Ϊfalse            
			{                
			    flag[i] = false;            
			}         
		}        
		for (i=0; i<26; i++)        
		{       
		    if (flag[i] == true)//c�ַ�������һ�������㣬����ѭ��            
			{           
			    break;            
			}        
		}        
		if (i<26)        
		{        
		    cout << "NO" << endl;    
	    }        
		else        
		{        
		    cout << "YES" << endl;    
	    }    
	}    
	return 0;
}
