#include<bits/stdc++.h>

#define pll pair<long long int,long long int>

using namespace std;

typedef long long int ll;


int main(){
	ll n,l,a;
	cin >> n >> l >> a;
	pll * arr = new pll[n];
	for (int i=0;i<n;++i){
		cin >> arr[i].first;
		cin >> arr[i].second;
	}
	sort(arr,arr+n);
	ll last = 0;
	ll current = 0;
	ll ans = 0;
	for (int i=0;i<n;++i){
		current = ans[i].first;
		ans += ((current - last)/a);
		last = current + arr[i].second;
	}
	current = l;
	ans += ((current-last)/a);
	cout << ans;
	return 0;
}

