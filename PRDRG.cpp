#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int t;
	cin >> t;
	int * n = new int [t];
	pair<ll,ll> arr[26];
	arr[0] = make_pair(1,1);
	arr[1] = make_pair(1,2);
	arr[2] = make_pair(1,4);
	for (int i=3	;i<=25;++i){
		arr[i].first = arr[i-1].first + 2*arr[i-2].first;
		arr[i].second = 2*arr[i-1].second;
	}
	for (int i=0;i<t;++i) cin >> n[i];
	for (int i=0;i<t;++i){
		cout << arr[n[i]].first << " " << arr[n[i]].second << " ";
	}
	return 0;
}

