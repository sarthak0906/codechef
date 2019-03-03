#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
 
ll gcd(ll a, ll b){
    if (!a)
       return b;
    return gcd(b%a,a);
}

ll reduce (ll a,ll b){
	int mod = 0;
	
	for (int i=0;b>0;++i){
		mod = (mod*10 + (b%10))%a;
		b/=10;
	}
	
	return mod;
}

ll gcdLarge (ll a,ll b){
	ll num = reduce(a,b);
	
	return gcd(a,num);
}

int main(){
	int t;
	cin >> t;
	while (t--){
		ll a,b,n;
		cin >> a>>b>>n;
		ll res;
		ll sec;
		res = pow(a,n) + pow(b,n);
		cout << res << " = res" << endl;
		if (a > b) sec = a-b;
		else sec = b-a;
		cout << "sec = " << sec << endl;
		cout << reduce(a,b) << "= reduced b" << endl;
		cout << gcdLarge(a,b) << endl;
	}	
	return 0;
}
