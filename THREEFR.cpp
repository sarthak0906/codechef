#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int t;
	cin >> t;
	while (t--){
		int x,y,z;
		cin >> x >> y >> z;
		if (x-y-z==0) cout << "yes\n";
		else if (y-x-z==0) cout << "yes\n";
		else if (z-x-y==0) cout << "yes\n";
		else if (x+y-z==0) cout << "yes\n";
		else if (x+z-y==0) cout << "yes\n";
		else if (y+z-x==0) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}

