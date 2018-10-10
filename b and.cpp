#include<iostream>

using namespace std;

int res(int arr[],int n,int x){
	for (int i=0;i<n;++i){
		for (int j=0;j<n;++j){
			if (j==i) continue;
			if ((arr[i] & x) == arr[j]){
				return 1;
			}
		}
	}
	return 0;
}

int main(){
	int n , x,test = 3;
	cin >> n >> x;
	int * arr = new int [n];
	for (int i=0;i<n;++i){
		cin >> arr[i];
		for (int j=0;j<i;++j){
			if (arr[i] == arr[j]) {
				cout << "0";
				test = 0;
			}
		}
	}
	if (test){
		int r = res(arr,n,x);
		if (r) cout << "1";
	}
	for (int i=0;i<n;++i) arr[i] = arr[i] & x;
	if (test == 3){
		int t = res(arr,n,x);
		if (t) cout << "2";
	} 
	if (test == 3) cout << "-1";
	return 0;
}
