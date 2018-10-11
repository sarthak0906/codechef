#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , m;
		cin >> n >> m ;
		int arr;
		int count = 0;
		while (n--){
			cin >> arr;
			if (arr%m == 0) count++; 
		}
		int res = 1 << count;
		res -= 1;
		cout << res << endl;
	}
	return 0;
}
