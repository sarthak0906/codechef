#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int n , m , q;
	cin >> n >> m >> q;
	char str[n+1];
	char t[n+1];
	cin >> str;
	cin >> t;
	int tt = strlen(t);
	int pr;
	while (q--){
		int l , r;
		cin >> l >> r;
		l--;
		r--;
		pr = 0;
		for (int i=l;i<r;++i){
			if (str[i] == t[0] ){
				int res =0;
				for (int j=1;j<tt && i+j < r;++j) {
					if (str[i+j] == t[j]){
					}
					else {
						res = 1;
						break;
					} 
				}
				if (res == 0) pr++;
			}
//			if ((l-r)<tt) pr = 0;
		}
		cout << pr << endl;
	}
	return 0;
}

