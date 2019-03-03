#include<bits/stdc++.h>
#define loop(i,a,n) for(int i=a;i<n;++i)
#define rloop(i,n,a) for(int i=n;i>=a;i--)
#define vi vector<int>
#define vl vector<long long int>
#define vvi vector<vector<int> >
#define vvl vector<vector<long long int> >
#define vpii vector<pair<int,int> >
#define vpll vector<pair<long long int,long long int> >
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define V vector
#define P pair
#define M map
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define IT iterator
#define MOD 1000000007;
using namespace std;

typedef long long int ll;

void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    M<char,int> mp;
    set<char> st;
    for (auto i:str){
        st.insert(i);
    }
    for (auto i:st){
        if (mp.find(i) == mp.end()) mp.insert(MP(i,0));
        mp[i]++;
    }
    for (int i=1;i<n;++i){
        cin >> str;
        st.clear();
        for (auto i:str){
            st.insert(i);
        }
        for (auto j:st){
            if (mp.find(j) != mp.end()) mp[j]++;
        }
    }
    ll res = 0;
    for (auto i:mp){
        // cout << i.F << "    " << i.S << endl;
        if (i.S == n) res++;
    }
    cout << res << endl;
}

int main(){
    int t=1;
    cin >> t;
    // cout << t;
    while (t--) solve();
}