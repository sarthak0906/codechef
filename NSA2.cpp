#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;

int fact(int n){
	if (n==0) return 0;
	else if (n==1) return 1;
	else return (n*fact(n-1));
}

int main(){
	int t;
	cin >> t;
	while (t--){
		char str[100000];
		cin >> str;
		int n = strlen(str);
		char max = 'a' , min = 'z' ;
		for (int i=0;i<n;++i){
			if (str[i]>max) max = str[i];
			if (str[i]<min) min = str[i];
		}
		vector <int> arr;
		vector <int> vec;
		for (int i=0;i<n;++i){
			arr.push_back(int(max)-int(str[i]));
			vec.push_back(int(max)-int(str[i]));
		}
		sort(vec.begin(),vec.end());
		int count = 0;
		for (int i=0;i<n;++i){
			if (vec[i] != arr[i]) count++;
		}
		cout << fact(count-1) << endl;
	}
	return 0;
}

