#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main(){
	int n;
	cin >> n;
	if (n<3){
		cout << "No";
	}
	else{
		cout << "Yes" << endl;
		cout << n - (n/2) << " ";
		for (int i=1;i<=n;i += 2){
			cout << i << " ";
		}
		cout << endl << n/2 << " ";
		for (int i=2;i<=n;i += 2){
			cout << i << " ";
		}
	}
	return 0;
}

