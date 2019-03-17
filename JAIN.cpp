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
    int n;
    cin >> n;
    ll arr[32] = {0};
    // vvi arr(n,vi(5,0));
    ll ans = 0;
    loop(i,0,n){
        string str;
        cin >> str;
        int a = 0;
        for (auto j:str){
            if (j == 'a') a =( a | (1 << 0) );
            if (j == 'e') a =( a | (1 << 1) );
            if (j == 'i') a =( a | (1 << 2) );
            if (j == 'o') a =( a | (1 << 3) );
            if (j == 'u') a =( a | (1 << 4) );
        }
        // loop(i,0,32){
        //     if ((a|i) == 31) ans += arr[i];
        // }
        arr[a]++;
    }
    // loop(i,0,32){
    //     cout << i << arr[i] << endl;
    // }
    loop(i,0,32){
        loop(j,i+1,32){
            if ((i|j) == 31){
                ans += arr[i] * arr[j];
                // cout << (i|j) << endl;
            }
        }
    }
    ll b = arr[31]*(arr[31]-1);
    b /= 2;
    ans += b;
    cout << ans << endl;
}

int main(){
    int t=1;
    cin >> t;
    while (t--) solve();
}