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
#define mp make_pair
#define IT iterator
#define MOD 1e9 + 7;
using namespace std;

typedef long long int ll;

void solve(){
    ll n,k;
    cin >> n >> k;
    vl arr(n,0);
    loop(i,0,n) cin >> arr[i];
    // loop(i,0,n) cout << arr[i];
    loop(i,0,n){
        ll a = 0;
        ll c = 1;
        loop(j,i,n){
            a += (arr[i]/c);
            c++;
        }
        // cout << a << endl;
        if (a <= k){
            cout << i+1 << endl;
            return;
        }
    }
    cout << n+1 << endl;
    return;
}

int main(){
    int t=1;
    cin >> t;
    while (t--) solve();
}