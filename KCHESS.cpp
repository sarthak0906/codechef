#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		map <pair<ll,ll>,int> arr;
		for (int i=0;i<n;++i){
			ll x,y;
			cin >> x >> y;
			arr[make_pair(x+1,y+2)] = 1;
//			vec.push_back();
			arr[make_pair(x-1,y+2)] = 1;
//			vec.push_back();
			arr[make_pair(x-2,y+1)] = 1;
//			vec.push_back(make_pair());
			arr[make_pair(x-2,y-1)] = 1;
 //			vec.push_back(make_pair(x-2,y-1));
			arr[make_pair(x+2,y+1)] = 1;
//			vec.push_back(make_pair(x+2,y+1));
			arr[make_pair(x+1,y-1)] = 1;
//			vec.push_back(make_pair(x+1,y-1));
			arr[make_pair(x+1,y-2)] = 1;
//			vec.push_back(make_pair(x+1,y-2));
			arr[make_pair(x-1,y-2)] = 1;
//			vec.push_back(make_pair(x-1,y-2));
//			arr[make_pair(x+2,y+1)] = 1;
		}
		int flag = 0;
		ll a,b;
		cin >> a >> b;
//		if (arr[make_pair(a-1,b+1)] == 1) flag += 1;
//		if (find(vec.begin(),vec.end(),make_pair(a+1,b))) flag += 1;
		if (arr[make_pair(a,b+1)] == 1) flag += 1;
//		if (find(vec.begin(),vec.end(),make_pair(a,b+1))) flag += 1;
		if (arr[make_pair(a+1,b+1)] == 1) flag += 1;
//		if (find(vec.begin(),vec.end(),make_pair(a+1,b+1))) flag += 1;
		if (arr[make_pair(a-1,b)] == 1) flag += 1;
//		if (find(vec.begin(),vec.end(),make_pair(a-1,b))) flag += 1;
		if (arr[make_pair(a,b-1)] == 1) flag += 1;
///		if (find(vec.begin(),vec.end(),make_pair(a,b-1))) flag += 1;
		if (arr[make_pair(a+1,b-1)] == 1) flag += 1;
//		if (find(vec.begin(),vec.end(),make_pair(a+1,b-1))) flag += 1;
		if (arr[make_pair(a-1,b-1)] == 1) flag += 1;
//		if (find(vec.begin(),vec.end(),make_pair(a-1,b-1))) flag += 1;
		if (arr[make_pair(a-1,b+1)] == 1) flag += 1;
		
		if(flag == 0) cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;
}

