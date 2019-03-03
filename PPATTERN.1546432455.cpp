#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve(){
	int n;
	cin >> n;
	int ** arr = new int * [n];
	for (int i=0;i<n;++i){
		arr[i] = new int [n];
	}
	int i=0;
	int j=0;
	int cnt = 1;
	while (cnt != n*n){
		arr[i][j] = cnt;
//		cout << "i "<< i << "  j   " << j << "   cnt   " << cnt << endl;
		cnt++;
		if (i == n-1){
			i = j+1;
			j = n-1;
		}
		else if (j==0){
			j = i+1;
			i = 0;
		}
		else {
			i++;
			j--;
		}
	}
	arr[3][3] = n*n;
//	cout << arr[0][0] << "  " << arr[0][1] << "  " << arr[0][2] << "  " << arr[0][3] << "  " << endl;
//	cout << arr[1][0] << "  " << arr[1][1] << "  " << arr[1][2] << "  " << arr[1][3] << "  " << endl;
//	cout << arr[2][0] << "  " << arr[2][1] << "  " << arr[2][2] << "  " << arr[2][3] << "  " << endl;
//	cout << arr[3][0] << "  " << arr[3][1] << "  " << arr[3][2] << "  " << arr[3][3] << "  " << endl;
	for (int i=0;i<n;++i){
		for (int j=0;j<n;++j){
			cout << arr[j][i] << "  ";
		}
		cout << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
