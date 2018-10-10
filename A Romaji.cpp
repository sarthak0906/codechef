#include<iostream>
#include<string.h>

using namespace std;

char vow1 [7] = {'a','e','o','i','u','n'};

char vow[6] = {'a','e','o','i','u'};

bool belongs(char a){
	for (int i=0;i<6;++i) if (vow1[i] == a) return false;
	return true;
}

bool isvow(char a){
	for (int i=0;i<5;++i) if (vow[i] == a) return true;
	return false;
}

int main(){
	string str;
	cin >> str;
	char * ptr = & str[0];
	int n = strlen(ptr);
	int t =0;
	for (int i = 0;i<n;++i){
		if (belongs(str[i])){
			if (!isvow(str[i+1])){
				cout << "NO" ;
				t++;
				break;
			}
		}
	}
	if (t==0) cout << "YES" ;
	return 0;
}
