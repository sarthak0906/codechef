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
    int n,b;
    cin >> n >> b;
    // vi a;
    // vi p;
    int m = INT_MIN;
    while(n--){
        int x,y,z;
        cin >> x >> y >> z;
        if (z <= b){
            m = max(m,x*y);
        }
    }
    if (m == INT_MIN){
        cout << "no tablet\n";
    }
    else {
        cout << m << endl;
    }
}

int main(){
    int t=1;
    cin >> t;
    while (t--) solve();
}