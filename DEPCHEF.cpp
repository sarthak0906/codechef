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
#define MOD 1000000007;
using namespace std;

typedef long long int ll;

void solve(){
    int n;
    cin >> n;
    vi a(n,0);
    vi d(n,0);
    loop(i,0,n){
        cin >> a[i];
    }
    d[0] = a[1] + a[n-1];
    d[n-1] = a[0] + a[n-2];
    loop(i,1,n-1){
        d[i] = a[i-1] + a[i+1];
    }
    int res = -1;
    loop(i,0,n){
        int x;
        cin >> x;
        if (x > d[i]){
//            cout << x << "     " << d[i] << endl;
            res = max(res,x);
        }
    }
    cout << res << endl;
}

int main(){
    int t=1;
    cin >> t;
    while (t--) solve();
}