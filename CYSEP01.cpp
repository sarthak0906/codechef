#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while (n--){
		string str;
		cin >> str;
		char * ptr = &str[0];
		for (int i=0;i<strlen(ptr);++i){
			int n = int(str[i]);
			n *= 2;
			n -= 97;
			n = n%26;
			n += 1;
//			printf("%c",n);
			cout << (char)n << " ";
		}
		cout << endl;
	}
	return 0;
}

