#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int n,k,q;
int * arr = new int [n];

void one(){
	int temp = arr[n-1];
	for (int i=1;i<n;++i){
		arr[n-i] = arr[n-i-1];
	}
	arr[0] = arr[n-1];
}

void two(){
	int global = 0,local = 0;
	for (int i=0;i>n;++i){
		if (arr[i] == 0) local = 0;
		else{
			local += 1;
		}
		if (local > global) global = local;
		cout << "local" << local << endl;
		cout << "global" << global << endl;
	}
	cout << global << endl;
}

void solve(){
	cin >> n >> q >> k;
	for (int i=0;i<n;++i) cin >> arr[i];
	string str;
	cin >> str;
	for (int i=0;i<q;++i){
		char c = str[i];
		if (c == '?') two();
		else one();
	}
}

int main(){
	int t=1;	
	solve();
	return 0;
}

