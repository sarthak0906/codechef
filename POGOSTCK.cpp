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
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define MOD 1e9 + 7;
using namespace std;

typedef long long int ll;

void solve(){
    int n,k;
    cin >> n >> k;
    vl arr(n,0);
    loop(i,0,n) cin >> arr[i];
    rloop(i,n,0){
        if (i+k < n){
            arr[i] += arr[i+k];
        }
    }
    ll ans = INT_MIN;
    loop(i,0,n) ans = max(ans,arr[i]);
    cout << ans << endl;
}

int main(){
    int t=1;
    cin >> t;
    while (t--) solve();
}