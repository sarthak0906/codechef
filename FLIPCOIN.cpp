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

int n,q;
vl arr(n,0);
vl tree(4*n,0);
vl lazy(4*n,0);

int query(int node,int low,int high,int qlow,int qhigh){
    if (lazy[node]){
        tree[node] = (high - low + 1) - tree[node];
        if(low != high){
            lazy[2*node+1]++;
            lazy[2*node+2]++;
            lazy[2*node+1]%=2;
            lazy[2*node+2]%=2;
        }
        lazy[node] = 0;
    }
    if (qhigh < low || qlow > high) return 0;
    if (qlow <= low && qhigh >= high) return tree[node];
    int mid = (low + high)/2;
    return query(2*node + 1,low,mid,qlow,qhigh)+query(2*node + 2,mid+1,high,qlow,qhigh);
}

void updaterange(int node,int low,int high,int qlow,int qhigh){
    // cout  << node << "     " << qlow << "    " << qhigh << highl;
    if (lazy[node]){
        tree[node] = (high - low + 1) - tree[node];
        if(low != high){
            lazy[2*node+1]++;
            lazy[2*node+2]++;
            lazy[2*node+1]%=2;
            lazy[2*node+2]%=2;
        }
        lazy[node] = 0;
    }
    if (qhigh < low || qlow > high) return;
    if (low >= qlow && qhigh >= high){
        // cout << "second if\n";
        // printf("qhigh = %d   qlow = %d   high = %d    low = %d \n",qhigh,qlow,high,low);
        tree[node] = (high - low + 1) - tree[node];
        if(low != high){
            lazy[2*node+1]++;
            lazy[2*node+2]++;
            lazy[2*node+1]%=2;
            lazy[2*node+2]%=2;
        }
        return;
    }
    int mid = (low + high)/2;
    updaterange(2*node +1,low,mid,qlow,qhigh);
    updaterange(2*node +2,mid+1,high,qlow,qhigh);
    tree[node] = tree[2*node + 1]+tree[2*node + 2];
    return;
}

int main(){
    cin >> n >> q;
    arr = vl(n,0);
    tree = vl(4*n,0);
    lazy = vl(4*n,0);
    while (q--){
        int l,r,c;
        cin >> c >> l >> r;
        if (c == 0){
            // l--;
            // r--;
            updaterange(0,0,n-1,l,r);
        }
        else {
            // l--;
            // r--;
            cout << query(0,0,n-1,l,r) << endl;
        }
    }
    return 0;
}