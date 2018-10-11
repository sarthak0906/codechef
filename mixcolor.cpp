#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		int n,a,var = 0;
		cin >> n ;
		vector<int> vec;
		for (int i=0;i<n;++i){
			int a;
			bool t;
			cin >> a;
			sort(vec.begin(),vec.end());
			if (binary_search(vec.begin(),vec.end(),a)==false){
				vec.push_back(a);
			}
			else var++;
		}
		cout << var << endl;
	}
	return 0;
}
