#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		map <int,vector<int> > mp;
		for (int i=0;i<n;++i){
			int a;
			cin >> a;
			if (mp.find(a)==mp.end()) mp[a] = vector<int> ();
			mp[a].push_back(i);
		}
//		for (int i=1;i<4;++i) cout << i << "		" << mp[i].size() << endl;
		int flag1 = 0;
		for (map<int,vector<int> > ::iterator itr = mp.begin();itr != mp.end();++itr){
			cout << itr->first << "		" ;
			for (vector<int>::iterator j = itr->second.begin();j != itr->second.end();++j) cout << j << "	";
			cout << endl;
			int flag = 0;
			if (itr->second.size() > 1){
				for (int j=0;j<itr->second.size();++j){
					if (mp.find(itr->second[j])!=mp.end()){
						flag ++;
						cout << flag << endl;
					}
				}
			}
			if (flag > 1){
				cout << "Truely Happy\n";
				flag1++;
				break;
			}
		}
		if (flag1 == 0) cout << "Poor Chef\n";
	}
	return 0;
}
