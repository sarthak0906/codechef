#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n,q;
	cin >> n >> q;
	vector<int> vec;
	while(n--){
		int a;
		cin >> a;
		vec.push_back(a);
	}
	while(q--){
		int a;
		cin >> a;
		if (a==1){
			
		}
		else {
			vector<int> vec1;
			int l,r;
			cin >> l >> r ;
			for (int i=l-1;i<r;++i) vec1.push_back(vec[l+i-1]);
			sort(vec1.begin(),vec1.end());
			for (int i=0;i<r-l-1;++i){
				if (vec1[l-i-1] > vec1[l-2-i]+vec1[l-3-i]){
					cout << vec1[l-i-1] + vec1[l-i-2] + vec1[l-i-3] <<endl;
					break;
				}
				else cout << "0";
			}
		} 
	}	
	return 0;
}
