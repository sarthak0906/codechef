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
#define F first
#define S second
#define IT iterator
#define MOD 1000000007;
using namespace std;

typedef long long int ll;

void solve(){
    ll n,a,b,k;
    cin >> n >> a >> b >> k;
    ll na,nb;
    ll lcm = (a*b)/__gcd(a,b);
    na = (n/a) - (n/lcm);
    nb = (n/b) - (n/lcm);
    // cout << "na = " << na;
    // cout << "\n nb = " << nb;
    if (na+nb >= k) cout << "Win\n";
    else cout << "Lose\n";
}

int main(){
    int t=1;
    cin >> t;
    while (t--) solve();
}