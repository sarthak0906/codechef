#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve(){
	ll x,t,y;
	cin >> x >> y;
	t=x;
	if (x%y == 0){
		cout << x << endl;
		return;
	}
	int num = 0;
	while (x){
		x/=10;
		num++;		
	}
	x=t;
	t = 10;
	ll last = x;
	for (int i=1;i+num<=18;++i){
		if (y - (x*t)%y < t){
			if ((x*t)%y == 0){
				cout << x*t << endl;
				return;
			}
			cout << x*t + y - ((x*t)%y) << endl;
			return;
		}
		t *= 10;
		last = x*t;
	}
//	cout << last << "\n";
	if(last == 100000000000000000 && 1000000000000000000%y == 0){
		cout << 1000000000000000000 << "\n";
		return;
	}
	cout << -1 << endl;
	return;
}

int main(){
	int t;
	cin >> t;
	while (t--) solve();	
	return 0;
}

