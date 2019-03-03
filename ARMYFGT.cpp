#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll gcd (ll a, ll b){
	if (b == 0) return a;
	return gcd(b,a%b);
}

void solve(){
	int n;
	cin >> n;
	vector <ll> arr;
	arr = vector<ll> (n,0);
	cin >> arr[0];
	int128 lcm = arr[0];
	for (int i=1;i<n;++i){
		cin >> arr[i];
	}
	ll up , low;
	cin >> low >> up;
	for (int i = 1;i<n;++i){
		lcm = (lcm*arr[i])/gcd(lcm,arr[i]);
		if (lcm > up) {
			cout << up-low+1 << endl;
			return;
		}
	}
	ll ans = 0;
	ans += (up/lcm) - ((low-1)/lcm);
//	cout << lcm << endl;
//	cout << up  << "    " << low << "      " << endl;
//	cout << up/lcm  << "    " << low-1/lcm << "      " << endl;
//	cout << ans << endl;
	cout << (up-low+1) - ans << endl;
	return;
}

int main(){
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

