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
    int n,x;
    cin >> n >> x;
    string str;
    cin >> str;
    // cout << str;
    // set <int , greater<int> > ans;
    int pos=0;
    int mn = 0;
    int mx = 0;
    for (auto i:str){
        if (i == 'R'){
            pos++;
        }
        else {
            pos--;
        }
        mn = min(mn,pos);
        mx = max(mx,pos);
    }
    cout << mx - mn + 1<< endl;
}

int main(){
    int t=1;
    cin >> t;
    while (t--) solve();
}