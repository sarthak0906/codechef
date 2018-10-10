#include<iostream>

using namespace std;

int main(){
	int n , m;
	cin >> n >> m;
	int cost[n];
	int value[m];
	for (int i=0;i<n;++i){
		cin >> cost[i];
	}
	for (int i=0;i<m;++i){
		cin >> value[i];
	}
	int res = 0 , count = 0 , i = 0;
	while (i<n&&count<m){
		if (cost[i] <= value[count]){
			res++;
			count ++;
		}
		i++;
	}
	cout << res;
	return 0;
}

