#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,q;
	cin >> n >> q;
	long int *arr = new long int [n];
	long int max = 0;
	for (int i=0;i<n;++i){
		cin >> arr[i];
		if (arr[i]>max) max = arr[i];
	}
	long int x;
	x = pow(2,31) - max;
	while (q--){
		int l,r,val = 0;
		cin >> l >> r ;
		long int result = 0;
		for (int i=0;i<n;++i){
			long int res = 0;
			for (int j=l-1;j<r;++j){
				res += (arr[j])^(x+i);
			}
			if (res>result){
				result = res;
				val = i;
			}
		}
		cout << x+val << endl;
	}
	return 0;
}
