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

// Maximum number of digits in output 
#define MAX 500 
  
int multiply(int x, int res[], int res_size); 
  
void factorial(int n){ 
    int res[MAX]; 

    res[0] = 1; 
    int res_size = 1; 
  
    for (int x=2; x<=n; x++) 
        res_size = multiply(x, res, res_size); 
  
    for (int i=res_size-1; i>=0; i--) 
        cout << res[i]; 
} 
  
int multiply(int x, int res[], int res_size){ 
    int carry = 0;  // Initialize carry 
  
    for (int i=0; i<res_size; i++){ 
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry  = prod/10;
    }

    while (carry){
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

void solve(){
	int n;
	cin >> n;
	factorial(n);
}

int main(){
    int t=1;
    cin >> t;
    while (t--) solve();
}