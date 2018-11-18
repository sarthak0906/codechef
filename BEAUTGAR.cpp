#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve(){
	string str;
	cin >> str;
	if (str.length()%2) {
		cout << "no\n";
		return;
	}
//	int a = 0;
	int x=0,y=0;
	if (str[0] == 'R' && str[str.length()-1] == 'R') x++;
	if (str[0] == 'G' && str[str.length()-1] == 'G') y++;
//	if (str[0] == str[str.length()-1]) a++;
//	cout << a << endl;
	for (int i=0;i<str.length()-1;++i){
//		if (str[i] == str[i+1]) a++;
		if (str[i] == 'R' && str[i+1] == 'R') x++;
		else if (str[i] == 'G' && str[i+1] == 'G') y++;
	}
//	cout << a << endl;
	if (x < 2 && y < 2 && x == y){
		cout << "yes\n";
		return;
	}
	cout << "no\n";
	return;
}

int main(){
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

