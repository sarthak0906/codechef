#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int  t ;
	cin >> t;
	while (t--){
		ll p1 , p2 , k;
		cin >> p1 >> p2 >> k;
		p1 += p2;
//		cout << p1 << endl;
//		cout << p1 << endl;
		p1 /= k;
//		cout << p1 << endl;
		p1 %= 2;
//		cout << p1 << endl;
		if (p1 == 0){
			cout << "CHEF" << endl;
		}
		else cout << "COOK" << endl;
	}	
	return 0;
}

