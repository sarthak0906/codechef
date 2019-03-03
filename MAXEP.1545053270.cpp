#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int tenary_search(int low,int high){
	if(low < high){
		int diff = high-low;
		diff /= 10;
		int a = low ;
		while (a < high){
			int in;
			cout << "1 " <<  a + diff << endl;
			cin >> in;
			if (in == 1) {
				cout << 2 << endl;
				cout << "1 " <<  a + diff-1 << endl;
				int c;
				cin >> c;
				if (c == 1){
					return tenary_search(a,a+diff);
				}
				else return a+diff-1;
			}
			a += diff;
		}
	}
}

int main(){
	int n,c;
	cin >> n >> c;
	cout << "3 " << tenary_search(0,n) << endl;
	return 0;
}

