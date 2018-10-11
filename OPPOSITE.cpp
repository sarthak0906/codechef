#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

void ans (ll arr[] , int n){
	for (int i=0;i<(n/2);++i){
		if (arr[i] != arr[(n/2)+i]){
			cout << "i = " << i << arr[i] << "  " << arr[(n/2)+i] << endl;
			if ((arr[i] == -1)&& (arr[(n/2)+i] == -1)){
			}
			else {
				cout << "NO" << endl;
				return;
			}
		} 
	}
	cout << "YES" << endl;
	for (int i=0;i<n;++i){
		if (arr[i] == -1){
			if (arr[(n/2)+i] == -1) cout << "1 " ;
			else cout << arr[(n/2)+i] << " " ;
		}
		else cout << arr[i] << " ";
	}
	cout << endl;
	return;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		ll n;
		cin >> n;
		ll * arr = new ll [n];
		for (int i=0;i<n;++i) cin >> arr[i];
		if (n%2) cout << "NO" << endl;
		else ans(arr,n);
	}
	return 0;
}

