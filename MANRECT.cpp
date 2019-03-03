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
//#define MOD 1000000007;
using namespace std;

typedef long long int ll;

/*
    (0,0) -> a+b = q[0] => a+b = c[0]
    (0,MOD) -> MOD+a-d = q[1] => a-d = c[1]
    (MOD,0) -> MOD-c1+b = q[2] => b-c1 = c[2]
    (mod,MOD) -> MOD-c1+MOD-d = q[3] => -c1-d = c[3]

    SO ==> 
    c[0] = q[0]
    c[1] = q[1] - MOD
    c[2] = q[2] - MOD
    c[3] = q[3] - 2*MOD

    p = (c[0]-c[2])/2
    q = (c[2]-c[3])/2

    now putting (p,0) to get man distance we get
    (p,0) -> b = q[4]
    and also (0,q) we get
    (0,q) -> a = q[5]

        also we calculated p = (a+c1)/2
        and q1 = (b+d)/2
        so 
        c1 = 2*p - a;
        d = 2*q1 - b;
*/

void solve(){
    ll a,b,c,d;
    ll q[7];
    ll m = 1e9;
    printf("Q 0 0");
    cout << endl;
    cin >> q[1];
    printf("Q 0 %ld",m);
    cout << endl;
    cin >> q[2];
    printf("Q %ld 0",m);
    cout << endl;
    cin >> q[3];
    ll x,y; // coordinate of midpoint of rectangle
    x = q[1] - q[3] + m;
    x /= 2;
    y = q[1] - q[2] + m;
    y /= 2;
    printf("Q %ld 0",x);
    cout << endl;
    cin >> q[5];
    // printf("Q 0 %ld",y);
    // cout << endl;
    // cin >> q[6];
    b = q[5];
    a = q[1] - b;
    d = m + a - q[2];
    c = m + b - q[3];
    printf("A %ld %ld %ld %ld",a,b,c,d);
    cout << endl;
    cin >> q[0];
    if (q[0] != 1){
        x += 1;
        printf("Q %ld 0",x);
        cout << endl;
        cin >> q[5];
        b = q[5];
        a = q[1] - b;
        d = m + a - q[2];
        c = m + b - q[3];
        printf("A %ld %ld %ld %ld",a,b,c,d);
        cout << endl;
        cin >> q[0];
    }
    return;
}

int main(){
    int t=1;
    cin >> t;
    while (t--) solve();
}