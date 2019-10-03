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
    #define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
    #define MOD 1e9 + 7;
    using namespace std;

    typedef long long int ll;

    int arr[9] = {2,5,5,4,5,6,3,7,6};

    void solve(){
        int n;
        cin >> n;
        if (n == 1){

            int x,y;
            cin >> x >> y;
            if (arr[x-1] < y){
                cout << "invalid\n";
                return;
            }
            cout << arr[x-1] - y << " " << 7 - y << endl;
            return;
        }
        vi x(n,0);
        vi y(n,0);
        loop(i,0,n){
            cin >> x[i] >> y[i];
        }
        cout << "invalid\n";
    }

    int main(){
        int t=1;
        cin >> t;
        while (t--) solve();
    }