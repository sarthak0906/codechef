#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,m;
		cin >> n >> m;
		string str[n];
		int flag = 0;
		for (int i=0;i<n;++i){
//			for (int j=0;j<m;++j){
//				string str[i];
				cin >> str[i];
//			}
		}
		int arr[n][m];
		memset(arr, 0, sizeof(arr[0][0]) * m * n);
		for (int i=0;i<n;++i){
			for (int j=0;j<m;++j){
				if (str[i][j] = '.'){
					if (i)
				}
				else arr[i][j] = 1;
			}
		}
		if (flag == 0) cout << "YES\n";
	}
	return 0;
}

