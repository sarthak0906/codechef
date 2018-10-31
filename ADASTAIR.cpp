#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n , k;
		cin >> n >> k;
		int * a = new int [n];
		int * arr = new int [n-1];
		for (int i=0;i<n;++i){
			cin >> a[i];
			if (i != 0) arr[i-1] = a[i] - a[i-1];
		}
//		for (int i=0;i<n-1;++i) cout << arr[i] << "  ";
//		cout << endl;
		int count = 0;
		for (int i=0;i<n-1;++i){
			if (arr[i]%k){
				count += arr[i]/k;
			}
			else {
				count += arr[i]/k;
				count -= 1;
			}
		}
		cout << count << endl;
	}
	return 0;
}

