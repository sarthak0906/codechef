 #include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << "1 1";
		n /=2;
		for (int i = 0; i<n ; ++i) cout << "0";
		cout << endl;
	}
	return 0;
}
