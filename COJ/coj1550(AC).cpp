//              A[I]<N	   A[I]=N	    A[I]>N
              
//B[I]<N	     C[I]<=A+B	  C[I]<=A+B	   C[I]<=N+B

//B[I]=N       C[I]<=A+B	  C[I]<=A+B    C[I]<=B+N

//B[I]>N	     C[I]<=A+N	  C[I]<=A+N	   C[I]<=N+N

//由题意，我们就可以列出9种情况：判断c中的某个字符串是否符合题意

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
		    A[str[i]-'A']++;//统计A字符串中某个字母的个数        
		}         
		cin >> str;        
		for (i=0; i<lenth; i++)        
		{            
		    B[str[i]-'A']++;//统计B字符串中字母的个数        
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
			    A[i] = lenth/2; //当A中某个字母>N中，最多也只能提供N个，赋值为N            
			}            
			if (B[i] > lenth/2)            
			{            
			    B[i] = lenth/2;            
			}             
			if (C[i] <= A[i] + B[i])//当c字符串满足是，标记为false            
			{                
			    flag[i] = false;            
			}         
		}        
		for (i=0; i<26; i++)        
		{       
		    if (flag[i] == true)//c字符串中有一个不满足，跳出循环            
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
