#include<iostream>
//#include<limits.h>

using namespace std;

int main(){
	int n , x;
	cin >> n >> x;
	int test = 0;
	int * arr = new int [n];
//	int * arr1 = new int [n];
	for (int i=0;i<n;++i){
		cin >> arr[i];
	//	arr1[i] = arr[i] & x;
	}
	for (int i=0;i<n;++i){
		for (int j=i+1;j<n;++j){
			if (arr[i] == arr[j]){
				//cout <<"0" << endl;
				test = 1;
				break;
			}
		}
	}
	if (test == 0){
		for (int i=0;i<n;++i){
			for (int j=0;j<n;++j){
				if (j == 0) continue;
				else {
					if (arr[j] = (arr[i] & x)){
				//		cout << "1" << endl;
						test = 2;
						break;
					}
				}
			}
		}
	}
	return 0;
}
