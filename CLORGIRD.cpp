#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,m;
		cin >> n >> m;
		string a[n];
		bool arr[n][m];
		memset(arr, 1, sizeof(arr[0][0]) * m * n);
		for (int i=0;i<n;++i){
//			for (int j=0;j<m;++j){
//				char a;
				cin >> a[i];
//			}
		}	
		int flag = 0;
		for (int i=0;i<n;++i){
			for (int j=0;j<m;++j){
				if (i == n-1 && j == m-1){
					if (a[i][j] == '.'){
						if ((a[i-1][j] == a[i-1][j-1] && a[i-1][j-1] == a[i][j-1] && a[i][j-1] == '.')){
							arr[i][j] = 0;
							arr[i-1][j] = 0;
							arr[i-1][j-1] = 0;
							arr[i][j-1] = 0;
						}
					}
				}
				else if (i == n-1){
					if (a[i][j] == '.'){
						if ((a[i-1][j] == a[i-1][j+1] && a[i-1][j+1] == a[i][j+1] && a[i][j+1] == '.')){
							arr[i][j] = 0;
							arr[i-1][j] = 0;
							arr[i-1][j+1] = 0;
							arr[i][j+1] = 0;
						}
					}
				}
				else if (j == m-1){
					if (a[i][j] == '.'){
						if ((a[i][j-1] == a[i+1][j-1] && a[i+1][j-1] == a[i+1][j] && a[i+1][j] == '.')){
							arr[i][j] = 0;
							arr[i][j-1] = 0;
							arr[i+1][j-1] = 0;
							arr[i+1][j] = 0;
						}
					}
				}
				if (a[i][j] == '.'){
					if (a[i][j] == '.'){
						if (!(a[i][j+1] == a[i+1][j+1] && a[i+1][j+1] == a[i+1][j] && a[i+1][j] == '.')){
							arr[i][j] = 0;
							arr[i+1][j] = 0;
							arr[i+1][j+1] = 0;
							arr[i][j+1] = 0;
						}
					}
				}
			}
		}
		for (int i=0;i<n;++i){
			for (int j=0;j<m;++j){
				if (arr[i][j]){
					flag ++;
					break;
				}
			}
		}
		if (flag == 0) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

