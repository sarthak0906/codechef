#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	ll n , l , a;
	cin >> n >> l >> a;
	ll * arr = new ll [n];
	int e = 0;
	for (int i=0;i<n;++i){
		int c,d;
		cin >> c >> d;
		if (i == 0) e = c;
		arr[i] = c+d;
	}
	int count = 0;
	if (n>0){
		count += e /a;
		for (int i = 1;i<n;++i){
			count += ((arr[i] - arr[i-1])/a);
		}
		count += ((l-arr[n-1])/a);
	}
	else count = l/a;
	cout << count << endl;
	return 0;
}

