#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a=0,b=0,c=0;
		vector<int> arr(n,0);
		for (int i=0;i<n;++i) cin >> arr[i];
		for (int i=0;i<n;++i){
			if (arr[i] == 0) a++;
			else if (arr[i] == 1) b++;
			else if (arr[i] == 2) c++;
		}
		while (--n){
			int a,b;
			cin >> a >> b;		
		}
		if (a&&(c==0&&b==0)) cout << 0 << endl;
		else if (b&&(c==0&&a==0)) cout << 0 << endl;
		else if (c&&(a==0&&b==0)) cout << 0 << endl;
		else if (c&&b) cout << 1 << endl;
		else if (b&&a) cout << 1 << endl;
		else if (c&&a) cout << 2 << endl;
	}
	return 0;
}
