#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int p,q;

double agl(int a, int b){
	double ret;
	double ap,bp,ab;
	ap = sqrt(pow(p-a,2)+pow(q,2));
	bp = sqrt(pow(p-b,2)+pow(q,2));
	ab = b-a;
	double x = (pow(ap,2)+pow(bp,2)-pow(ab,2))/(2*ap*bp);
	ret = acos(x);
//	cout << ret;
	return ret;
}

void solve(){
	int n;
	cin >> n;
	int * arr = new int [n];
	for (int i=0;i<n;++i) cin >> arr[i];
	sort(arr,arr+n);
	cin >> p >> q;
	int prev = arr[0];
	double ans = 0;
//	cout << agl(arr[0],arr[1]) << endl;
	int j = 1;
	for (int i=1;i<n;++i){
		ans += j * agl(prev,arr[i]);
		if (i < n/2) j++;
		else j--;
		prev = arr[i];
	}
	printf("%.10f\n",ans);
}

int main(){
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
