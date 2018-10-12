/*
 ____________________________________________________________
|                                                            |
|                   Author: sarthak0906                      |
|____________________________________________________________|
*/
#include <bits/stdc++.h>

#define MOD 1000000007
#define init(arr,val) memset(arr,val,sizeof(arr))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopr(i,a,b) for(int i=a;i>=b;i--)
#define loops(i,a,b,step) for(int i=a;i<b;i+=step)
#define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)
#define ull unsigned long long int
#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define VI vector <int> 
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define mp make_pair
#define pb push_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define IT iterator
#define RIT reverse_iterator
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define FILE_READ freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);


using namespace std;

int main(){
	ll t;
	cin >> t;
	while (t--){
		ll n , d;
		cin >> n >> d;
		cout << n << " " << d;
		ll a =(n%9 == 0)?9:n%9;
		ll b =(d%9 == 0)?9:d%9;
		int i = n;
		PII arr[10];
		loop(i,0,10) arr[i] = mp(0,0);
		int c = 0;
		int j = 0;
		while (c != a && i < n + (10*d)){
			i += d;
			j += 1;
			c = a + b;
			c = (c > 9) ? c -= 9 : c;
			if (arr[c].S == 0) {
				arr[c].S = i;
				arr[c].F = j;
			}
		}
		loop(i,0,10) cout << arr[i].F << " " << arr[i].S << endl;
		loop(i,0,10){
			if (arr[i].F){
				int q = arr[i].S;
				int o = 0;
				while (q > 10){
					o += 1;
					int a = 0;
					while (q){
						a += q % 10;
						q /= 10;
					}
					q = a;
				}
				cout << i << " " << arr[i].F + o << endl;
				break;
			}
		}
	}
	return 0;
}

