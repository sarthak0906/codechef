#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	ll t;
	cin >> t;
	while (t--){
		ll n;
		cin >> n;
		ll p = n%26;
		ll c = (n-1)/26;
		ll s = 1ULL << c;
		if (p == 0) cout << "0 0 " << s << endl;
		else if (p <= 2) cout << s << " 0 0" << endl;
		else if ((p > 2) && (p <=10)) cout << "0 " << s << " 0" << endl;
		else cout << "0 0 " << s << endl;
	}
	return 0;
}

