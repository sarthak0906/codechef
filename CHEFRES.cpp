#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

ll bs(vector < pair <ll , ll > > vec,ll low,ll high,ll x){
	int mid = (low + high)/2;
	
	if ((vec[mid].first <= x )&&(vec[mid+1].first > x)) return mid;
	if (vec[mid+1].first < x) return bs(vector < pair <ll , ll> vec,mid+1,high , x);
	if (vec[mid].first > x) return bs(vector < pair <ll , ll > > vec,low,mid,x);
}

int main(){
	int t;
	cin >> t;
	while (t--){
		ll n , m;
		cin >> n >> m;
		ll * l = new ll [n];
//		ll * r = new ll [n];
		vector < pair <ll , ll > > vec;
		ll * p = new ll [n];
		for (int i=0;i<n;++i){
			ll a , b;
			cin >> a >> b;
			l[i] = a;
			vec.push_back(make_pair(a,b));
		}
		sort(vec.begin(),vec.end());
		for (int i=0;i<n;++i) {
			cin >> p[i];
			ll sol = bs(l,0,n,p[i]);
			if (x < r) cout << 0 << endl;
			else cout << vec[sol+1].first - x;
		}
		
	}
	return 0;
}
