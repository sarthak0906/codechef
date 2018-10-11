#include<iostream>

using namespace std;

int main(){
	long long int res = 0;
	cout << " { " ; 
	for (int i=0;i<31;++i){
		for (int j=i+1;j<31;++j){
			res = (1<<i) + (1<<j);
			cout << res << ",";
		}
	}
	cout << "}";
	return 0;
}
