#include<iostream>

using namespace std;

int main(){
	long long int n , m;
	cin >> n >> m;
	long long int * arr = new long long int [n];
	long long int * res = new long long int [n];
	int rese = 0;
	for (int i=0;i<n;++i){
		cin >> arr[i];
		rese += arr[i];
		res[i] = rese/m;
		
	}
	cout << res[0] << " ";
	for (int i=1;i<n;++i) cout << res[i] - res[i-1] << " ";
	return 0;
}
