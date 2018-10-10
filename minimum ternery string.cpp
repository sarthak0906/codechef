#include<iostream>
#include<string.h>

using namespace std;

int main(){
	string str;
	cin >>  str;
	int i =0;
	int one = 0, two =0, three =0;
	while (str[i]!='/0'&&str[i]<=str[i+1]){
		if (str[i] == '0') one++;
		else if (str[i] == '1') two++;
		else if (str[i] == '2') three++;
	}
	two += one;
	three += two;
	char * ptr = &str[0];
	int n = strlen(ptr);
	for (int j=0;j<n;++j){
		if (j<=i){
			if (i<one) cout << '0';
			else if (i<two) cout << '1';
			else if (i<three) cout << '2';
		}
		else cout << str[i];
	}
	return 0;
}

