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

struct linkedlist{
	ll v;
    ll t;
	struct linkedlist * next;
};

typedef struct linkedlist * node;

node create-node(ll v, ll t){
	node temp;
	temp = (node)malloc(sizeof(linkedlist));
	temp->next = NULL;
	temp->v = v;
	temp->t = t;
	return temp;
}

void add-node(ll i, ll v, ll t){
	node temp, p;
	temp = create-node(v, t);
	if (start[i] == NULL) {
		start[i] = temp;
        end[i] = temp;
	}
    else {
        p = end[i];
        p->next = temp;
        end[i] = temp;
    }
}

/*
	to traverse into the list
	node p;
	p = head;
	while (p->next == NULL || p->data == value) p->next = p;
	 
*/

typedef struct node * Node;

V <Node> start(n);
V <Node> end(n);

void solve(){
    int n,q;
    cin >> n >> q;


    while (q--){
        int type;
        cin >> type;
        if (type == 1){
            ll v, t, i;

            cin >> t >> i >> v;
            i--;
            add-node(i,v,t);
        }
        else {
            `
        }
    }
}

int main(){
    int t=1;
    //cin >> t;
    while (t--) solve();
}