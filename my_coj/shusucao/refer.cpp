/*
 * =====================================================================================
 *
 *       Filename:  refer.c
 *
 *    Description:  reference for my answer;
 *
 *        Version:  1.0
 *        Created:  05/26/2016 12:54:16 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  叶孤城 (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstdio>
#include <math.h>
using namespace::std;
unsigned int a[1299710];

int main()
{
	unsigned int m,i,j;
        freopen("input.txt", "r", stdin);
	cin >> m;
	for(i=1;i<=1299710;i++)
		a[i]=1;
	for(i=2;i<=1299710;i++)
		if(a[i])
			for(j=i;i*j<=1299710;j++)
				a[j*i]=0;
	while(m--)
	{
		unsigned int n,num=1;
		cin >> n;
		if(a[n])
			cout << "0\n";
		else 
		{
			for(i=n;i<=1299710;i++)
				if(a[i]==0)
					num++;
				else if(a[i])
					break;
			for(i=n-1;i>=2;i--)
				if(a[i]==0)
					num++;
				else if(a[i])
					break;
			cout << num << '\n';
		}
	}
	return 0;
}

