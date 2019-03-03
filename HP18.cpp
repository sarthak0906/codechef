#include<bits/stdc++.h>
#define loop(i,a,n) for (int i=a;i<n;++i)
#define rloop(i,a,n) for (int i=a;i>=n;i--)
#define vi vector<int>
#define vvi vector<vector<int> >
#define vl vector<long long int>
#define pii pair<int,int>
#define F first
#define S second
#define V vector

using namespace std;

typedef long long int ll;

void solve(){
    int n,a,b;
    cin >> n >> a >> b;
    vi arr(n);
    int na = 0;
    int nb = 0;
    int nab = 0;
    loop(i,0,n){
        cin >> arr[i];
        if ((arr[i]%a == 0) && (arr[i]%b == 0)) nab++;
        else {
            if (arr[i]%a == 0) na++;
            if (arr[i]%b == 0) nb++;
        }
    }
    int an = nab / 2;
    int bn = nab - an;
    an += nb;
    bn += na;
    // cout << nab << "nab" << endl;
    // cout << na << "na" << endl;
    // cout << nb << "nb" << endl;
    // cout << an << "an" << endl;
    // cout << bn << "bn" << endl;
    if (bn < an) cout << "ALICE\n";
    else cout << "BOB\n";
}

int main(){
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}