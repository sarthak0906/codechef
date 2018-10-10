#include<bits/stdc++.h>

using namespace std;

int main(){
	int n ,k;
	string str;
	cin >> n >> k;
	cin >> str;
	if (str[0] == str[n-1]){
		for (int i=0;i<k;++i){
			for (int i=0;i<n-1;++i) cout << str[i];
		}
		cout << str[n-1];
	}
	else {
		for (int i=0;i<k;++i) cout << str;
	}
	return 0;
}

