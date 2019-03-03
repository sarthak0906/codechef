#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int tenary_search(int low,int high){
	if(low + 10 < high){
		int diff = high-low;
		diff /= 10;
		int a = low ;
		while (a < high){
			int in;
			cout << "1 " <<  a + diff << endl;
			cin >> in;
			if (in == 1) {
				cout << 2 << endl;
				return tenary_search(a,a+diff);
			}
			a += diff;
		}
	}
	else {
		int a = 0;
		for (int i=0;i<10;++i){
			cout << "1 " << low << endl;
			cin >> a;
			if (a == 1){
				cout << "2\n";
				cout << "3 " << low << endl;
				break;
			}
			low ++;
		}
	}
}

int main(){
	int n,c;
	cin >> n >> c;
	tenary_search(0,n);
	return 0;
}

