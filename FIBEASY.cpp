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
    
std::vector<int> arr;
void calc(){
	int a = 0;
	int b = 1;
	int c;
	arr.push_back(0);
	arr.push_back(1);
	while (1){
	    c = (a+b)%10;
    	arr.push_back(c);
	    a = b;
	    b = c;
	    if (a == 9 && b == 1) break;
    }
}

void solve(){
    ll n;
    cin >> n;

    n = log2(n);
    n = 1 << n;
    n = n%60;
    n--;
    int k = n;

    cout << arr[k] << endl;
}

int main(){
    int t=1;
    cin >> t;
    calc();
    while (t--) solve();
}