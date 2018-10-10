#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int n , m , q;
	cin >> n >> m >> q;
	char str[n+1];
	char t[m+1];
	cin >> str;
	cin >> t;
	while (q--){
		int l , r;
		cin >> l >> r;
		char sub[l-r+1];
//		strcpy(sub,&str[l-1]);
		for 
		int pr = 0;
		cout << sub << endl;
		for (int i=0;i<n;++i){
			if (sub[i] == t[0] ){
				int res =0;
				for (int j=1;j<m;++j) {
					if (sub[i+j] == t[j]){
					}
					else {
						res = 1;
						break;
					} 
				}
				if (res == 0) pr++;
			}
		}
		cout << pr << endl;
	}
	return 0;
}

