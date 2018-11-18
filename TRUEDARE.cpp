#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve(){
	int tr,dr,ts,ds;
	int flag = 0;
	int t[101] = {0};
	int d[101] = {0};
	cin >> tr;
	while(tr--){
		int a;
		cin >> a;
		t[a]++;
	}
	cin >> dr;
	while(dr--){
		int a;
		cin >> a;
		d[a]++;
	}
	cin >> ts;
	while(ts--){
		int a;
		cin >> a;
		if (t[a] == 0) flag++;
	}
	cin >> ds;
	while(ds--){
		int a;
		cin >> a;
		if (d[a] == 0) flag++;
	}
	if (flag == 0) cout << "yes\n";
	else cout << "no\n";
}

int main(){
	int t = 1;
	cin >> t;
	while (t--) solve();
	return 0;
}

