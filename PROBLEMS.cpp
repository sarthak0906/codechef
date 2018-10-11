#include<bits/stdc++.h>

using namespace std;

bool sortinrev(const pair<int,int> &a, const pair<int,int> &b){
	return (a.first > b.first);
}

typedef long long int ll;

int main(){
	ll p , s;
	cin >> p >> s;
	int * ns = new int [s];
	int * sc = new int [s];
	vector <pair <int, int > > pro;
	for (ll i=0;i<p;++i){
	vector <pair <int,int> > vec;
		for (ll j=0;j<s;++j) {
			cin >> sc[j];
		}
		for (ll j=0;j<s;++j){
			cin >> ns[j];
			vec.push_back(make_pair(sc[j],ns[j]));
		}
		for (int j=0;j<p;++j) cout << vec[j].first << "  " << vec[j].second << endl;
		sort(vec.begin(),vec.end(),sortinrev);
		for (int j=0;j<p;++j) cout << vec[j].first << "  " << vec[j].second << endl;
		int n = s;
		for (int j=0;j<s-1;++j) {
			if (vec[j].second < vec[j+1].second) n--;
			cout << vec[j].second << "  " << vec[j+1].second << endl;
		}
		cout << " n = " << n << endl;
		pro.push_back(make_pair(n,i));
	}
	sort(pro.begin(),pro.end(),sortinrev);
	for (int i=0;i<p;++i){
		cout << pro[i].second + 1 << endl;
	}
	return 0;
}
