#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n ;
        unordered_map<ll , ll > even;
        unordered_map<ll , ll > odd;
        ll a;
        ll maxo = INT_MIN;
        ll maxe = INT_MIN;
        ll ne = 0;
        ll no = 0;
        for (ll i=0;i<n;++i){
            cin >> a;
            if (a%2){
                no++;
                if (a > maxo) maxo = a;
                
                if (odd.find(a) == odd.end()) odd.insert(make_pair(a,1));
                else odd[a]++;
            }
            else {
                ne++;
                if (a > maxe) maxe = a;
                
                if (even.find(a) == even.end()) even.insert(make_pair(a,1));
                else even[a]++;
            }
        }
        ll res = no * (no-1);
        res += ne * (ne-1);
        res /= 2;
//       cout << "res = "<< res ;
        ll sub = 0;
        for (ll i=1;i<maxo;i+=4){
            if ((odd.find(i) != odd.end()) && (odd.find(i+2) != odd.end())){
                sub += (odd[i] * odd[i+2]);
            }
        }
//        cout << "sub = "<< sub ;
        for (ll i=4;i<maxe;i+=4){
            if ((even.find(i) != even.end()) && (even.find(i+2) != even.end())){
                sub += (even[i] * even[i+2]);
            }
        }
        unordered_map<int,int> ::iterator itr;
        for (itr = odd.begin();itr != odd.end();itr++){
            sub += ((itr->second) * ((itr->second)-1));
        }
        for (itr = even.begin();itr != even.end();itr++){
            sub += ((itr->second) * ((itr->second)-1));
        }
//        cout << "sub = "<< sub ;
        res -= sub;
        cout << res << endl;
    }
	return 0;
}
