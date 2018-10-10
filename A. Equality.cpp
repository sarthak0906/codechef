#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main(){
	int n , k;
	cin >> n >> k;
	string str;
	cin >> str;
	int arr[k] = {0};
	int min = INT_MAX;
	for (int i=0;i<n;++i){
		arr[int(str[i]) - 65] ++;
	}
	for (int i=0;i<k;++i){
		if (arr[i] < min){
			min = arr[i];
		}
	}
	cout << min * k ;
	return 0;
}

