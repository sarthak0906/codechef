#include<iostream>
//#include<cmath>

using namespace std;

int main()
{
	int n,q,bits;
	cin >> n >> q;
	int *arr = new int[n];
	int max = 0;
	for (int i=0;i<n;++i){
		cin >> arr[i];
		bits = bits | arr[i];
//		if (arr[i] > max) max = arr[i];
	}
	int z = 1;
	z = z<<31;
	z = z - bits;
	while(q--){
		int l,r,a,amax=0;
		cin >> l >> r ;
		for (int i=0;i<bits;++i){
			for (int j = l-1;j<r;++j){
				a = arr[j]^(z+i);
			}
			if (a>amax) amax = a;
		}
		cout << amax << endl;
	}
//=	int z = pow(2,31) - bits;
	return 0;
}
