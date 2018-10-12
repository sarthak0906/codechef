#include<bits/stdc++.h>

using namespace std;

void ds(long long int, long long int);
typedef long long int ll;
ll ans;
ll step = 0;
ll d;
void addsum(ll n,ll c){
	ll i = 0;
	if(n == ans)step=min(step,c);
	if(n < ans){
		ans = n;
		step = c;
	}
	if(c == 20)return;
	addsum(n+d,c+1);
	ds(n+d,c+1);
}

void ds(ll n, ll c){
	if(n == ans)step=min(step,c);
	if(n < ans){
		ans = n;
		step = c;
	}
	if(c == 20)return;
	ll ret;
	ret = 0;
	while(n){
		ret+=(n%10);
		n/=10;
	}
	addsum(ret,c+1);
	ds(ret,c+1);
}

/*ll digitsum (ll n){
	int i = 0;
	for (i=0;n<10;++i){
		n = addsum(n);
	}
	return i;
}
*/
int main(){
	ll t;
	cin >> t;
	while (t--){
		ll n;
		cin >> n >> d;
		ans = LONG_LONG_MAX;
		step = 0;
		ds(n,0);
		addsum(n,0);
		cout << ans << " " << step << "\n";
//		ll i =0;
//		int a = ds(n);
//		int arr[10] ;
//		int b = ds(d);
//		cout << a <<endl << b;
//		memset(arr,11,sizeof(arr));
//		arr[a] = 0;
//		int e = a;
//		//int i = 0;
//		while (i<25){
//			e = ds(e+b);
//			i += 1;
//			if (arr[e] != 11) arr[e] = i;
//		}
////		for (i=0;i<n;++i){
////			if (arr[i]) break;
////		}
//		for(i =0;i<10;++i){
//			if (arr[i] != 11){
//				cout << i << " ";
//				int q = n + arr[i]*d;
//				int o = 0;
//				while (q > 10){
//					o += 1;
//					int a = 0;
//					while (q){
//						a += q % 10;
//						q /= 10;
//					}
//					q = a;
//				}
//				cout << q << endl;
//				break;
//			}
//		}
	}
	return 0;
}

