#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n,r;
	cin >> n >> r;
	while (n--){
		int x;
		cin >> x;
		if (x < r) cout << "Bad boi" << endl;
		else cout << "Good boi" << endl;
	}
	return 0;
}
