#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll addsum(ll n){
	ll i = 0;
	while (n){
		i += n%10;
		n /= 10;
	}
	return i;
}

ll ds(ll n){
	int ret;
	ret = n%9;
	if (ret == 0) return 9;
	return ret;
}

ll digitsum (ll n){
	ll i = n;
	ll j = 0;
	while (addsum(i) == ds(n)){
		i = addsum(i);
		j++;
	}
	return j;
}

int main(){
	ll t;
	cin >> t;
	while (t--){
		ll n ,d;
		cin >> n >> d;
		ll i =0;
		int a = ds(n);
		int arr[10] = {0};
		for (i=0;i<n;++i){
			a = ds(a+d);
			if (!arr[a]) arr[a] = i;
		}
		for (i=0;i<n;++i){
			if (arr[i]) break;
		}
		cout << i << " ";
		a = n + d*i;
		cout << arr[i] + digitsum(a) << endl;
	}
	return 0;
}

