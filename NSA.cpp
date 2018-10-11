#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;

int fact(int a){
	if (a==1) return 1;
	else return a*fact(a-1);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		char str[];
		cin >> str;
		int n = strlen(str);
		char max = a;
		char min = z;
		for (int i=0;i<n;++i){
			if (str[i] < min) min = str[i];
			if (str[i] > max) max = str[i];
		}
		vector<int> arr;	
		vector <int> vec;
//		int arr = new int [n];
//		int * arr = new int [strlen(str)];
		for (int i=0;i<n;++i){
			arr.push_back(int(max)-int(str[i]));
			vec.push_back(int(max)-int(str[i]));
//			arr[i] = max - str[i];
		}
		sort(vec.begin,vec.end);
		int count = 0;
		for (int i=0;i<n;++i){
			 if (vec[i]!= arr[i]) count ++;
		}
		cout << fact(count-1) << endl;
	}
	return 0;
}
