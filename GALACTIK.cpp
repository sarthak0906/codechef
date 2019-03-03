#include<bits/stdc++.h>
#define loop(i,a,n) for(int i=a;i<n;++i)
#define rloop(i,n,a) for(int i=n;i>=a;i--)
#define vi vector<int>
#define vl vector<long long int>
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

vi p;
vi r;
vi arr;

int find(int x){
    while(p[x] != x){
        x = p[x];
        p[x] = p[p[x]];
    }
    return x;
}

void u(int a,int b){
    int pa = find(a);
    int pb = find(b);
    if (r[pa] > r[pb]){
        p[pb] = pa;
        return;
    }
    if (r[pa] < r[pb]){
        p[pa] = pb;
        return;
    }
    p[pa] = pb;
    r[pb] += 1;
    return;
}

int main(){
    int n , m;
    cin >> n >> m;
    p = vi(n,0);
    loop(i,0,n) p[i] = i;
    r = vi(n,1);
    arr = vi(n);
    while (m--){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        p[a] = b;
    }
    loop(i,0,n) cin >> arr[i];
    vpii h;
    loop(j,0,n){
        int x = find(j);
        int flag = 0;
        for (auto i:h){
            if (i.F == x){
                flag++;
                if (i.S < 0) i.S = arr[j];
                else if (i.S > arr[j]) i.S = arr[j]; 
            }
        }
        if (flag == 0){
            h.push_back(make_pair(x,arr[j]));
        }
    }
    ll res = 0;
    int mn = INT_MAX;
    int sum = 0;
    int flag = 0;
    for (auto i:h){
//        cout << i.F << "  " << i.S << endl;
        if (i.S < 0) flag++;
        sum += i.S;
        mn = min(mn,i.S);
    }
    if (flag) cout << -1 << endl;
    else {
        sum += ((h.size()-2)*mn);
        cout << sum << endl;
    }
    return 0;
}