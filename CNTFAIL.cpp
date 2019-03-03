#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve(){
	int n;
	cin >> n;
//	int * arr = new int [n];
	ll prev;
	ll next;
	bool flag = true;
	cin >> prev;
	ll max = prev;
	for (int i=1;i<n;++i){
		cin >> next;
		if (next+1 == prev || next == prev || next-1 == prev){
		}
		else flag = false;
		if (next > prev) max = next;
		prev = next;
	}
	if (flag == false) cout << "-1\n";
	else cout << n-max << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

