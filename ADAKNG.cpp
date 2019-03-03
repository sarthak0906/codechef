#include<bits/stdc++.h>
#define loop(i,a,n) for(int i=a;i<n;++i)
#define rloop(i,n,a) for(int i=n;i>=a;i--)
#define vi vector<int>
#define vl vector<long long int>
#define vii vector<vector<int> >
#define vll vector<vector<long long int> >
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

int r,c,k;

bool sol(int i,int j){
	if (i <= r+k && i >= r-k){
		if (j <= c+k && j >= c-k) return true;
	}
	else return false;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int res = 0;
        cin >> r >> c >> k;
        int i;
        if (r-k < 1) i = 1;
        else i = r-k;
        int j;
        if (c-k < 1) j = 1;
        else j = c-k;
        int l;
        if (r+k > 8) l = 8;
        else l = r+k;
        int m;
        if (c+k > 8) m = 8;
        else m = c+k;
//		for (int i=1;i<=8;++i){
//			for (int j=1;j<=8;++j){
//				if (sol(i,j)) {
//					res ++;
//				}
//			}
//		}
		res = (m-j + 1)*(l-i + 1);
        cout << res << endl;
    }
    return 0;
}
