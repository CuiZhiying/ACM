#include <iostream>
#include <cstring>

using namespace std;
typedef long long LL;
const int N=10001;
int a[N], f[N], d[N]; // d[i]���ڼ�¼a[0...i]����󳤶�

int bsearch(const int *f, int size, const int &a)

{

	int l=0, r=size-1;

	while( l <= r )

	{

		int mid = (l+r)/2;

		if( a > f[mid-1] && a <= f[mid] ) return mid; // >&&<= ��Ϊ: >= && <

		else if( a < f[mid] ) r = mid-1;

		else l = mid+1;

	}

}

int LIS(const int *a, const int &n) {

	int i, j, size = 1;
	int sum=0;

	f[0] = a[0];
	d[0] = 1;

	for( i=1; i < n; ++i ) {

		if( a[i] <= f[0] ) j = 0;                 // <= ��Ϊ: <

		else if( a[i] > f[size-1] ) j = size++;   // > ��Ϊ: >=

		else j = bsearch(f, size, a[i]);

		f[j] = a[i];
		d[i] = j+1;

	}
	for(int i=0;i<n;i++)
	{
		sum+=f[i];
	}
	return sum;

}
int main() {
	int T;
	cin>>T;
	while(T--) {
		int n;
		cin>>n;
		for(int i=0; i<n; i++) {
			cin>>a[i];
		}
		cout<<LIS(a,n)<<endl;
	}
	return 0;
}
