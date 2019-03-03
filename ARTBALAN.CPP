#include<bits/stdc++.h>
#define loop(i,a,n) for(int i=a;i<n;++i)
#define rloop(i,n,a) for(int i=n;i>=a;i--)
#define vi vector<int>
#define vl vector<long long int>
#define vvi vector<vector<int> >
#define vvl vector<vector<long long int> >
#define vpii vector<pair<int,int> >
#define vpll vector<pair<long long int,long long int> >
#define mpii map<int,int>
#define mpll map<long long int,long long int>
#define mpci map<char,int>
#define mpcl map<char,long long int>
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define V vector
#define P pair
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define IT iterator
#define MOD 1000000007;
using namespace std;

typedef long long int ll;

bool sortbysec(const P<int,int> &a,const P<int,int> &b){ 
    return (abs(a.S) < abs(b.S)); 
}

int d ;

void solve(){
    string str;
    cin >> str;
    map<char,int> mp;
    for (auto i:str){
        if (mp.find(i) == mp.end()) mp.insert(MP(i,0));
        mp[i]++;
    }
    int n = str.length();
    ll ans = INT_MAX;
    loop(i,1,27){
        if (n%i == 0){
            cout << n << endl;

            d = n/i;
            vpii vec;
            for(auto j:mp) vec.push_back(MP(j.S,d-j.S));
            sort(vec.begin(),vec.end(),sortbysec);
            int res = INT_MAX;
            int b=0;
            loop(j,0,i){
                
            }
        }
    }
}

int main(){
    int t=1;
    cin >> t;
    while (t--) solve();
}