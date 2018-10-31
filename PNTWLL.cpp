#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,m;
		cin >> n >> m;
		priority_queue <pair<int,int> > p;
		pair<int,int> * arr = new pair<int,int> [n];
		for (int i=0;i<n;++i){
			//int a;
			cin >> arr[i].first;
			//p.push(a);
		}
		for (int i=0;i<n;++i){
			int a;
			cin >> a;
			arr[i].second = a;
		}
		for (int i=0;i<n;++i){
			while (!p.empty() && arr[i].first >= p.top().first) p.pop();
			p.push(arr[i]);
		}
		   int k = 0;
	    map<ll,ll> ans;
	    while(p.size()){
	        if(ans[p.top().second] == 0)k++;
	        ans[p.top().second]++;
	        p.pop();
	    }
    	cout << k << "\n";
	}
	return 0;
}

