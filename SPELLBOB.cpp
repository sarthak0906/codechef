#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		char s1[4];
		char s2[4];
		cin >> s1;
		cin >> s2;
		char t1[4] = {s1[0],s1[1],s2[2]};
		char t2[4] = {s1[0],s2[1],s1[2]};
		char t3[4] = {s2[0],s1[1],s1[2]};
		char t4[4] = {s2[0],s2[1],s1[2]};
		char t5[4] = {s2[0],s1[1],s2[2]};
		char t6[4] = {s1[0],s2[1],s2[2]};
		char r1[4] = {'b','o','b'};
		char r2[4] = {'o','b','b'};
		char r3[4] = {'b','b','o'};
		if (!strcmp(s1,r1)) cout << "yes" << endl;
		else if (!strcmp(s1,r2)) cout << "yes" << endl;
		else if (!strcmp(s1,r3)) cout << "yes" << endl;
		else if (!strcmp(s2,r1)) cout << "yes" << endl;
		else if (!strcmp(s2,r2)) cout << "yes" << endl;
		else if (!strcmp(s2,r3)) cout << "yes" << endl;
		else if (!strcmp(s2,r1)) cout << "yes" << endl;
		else if (!strcmp(s2,r2)) cout << "yes" << endl;
		else if (!strcmp(s2,r3)) cout << "yes" << endl;
		else if (!strcmp(t1,r1)) cout << "yes" << endl;
		else if (!strcmp(t1,r2)) cout << "yes" << endl;
		else if (!strcmp(t1,r3)) cout << "yes" << endl;
		else if (!strcmp(t2,r1)) cout << "yes" << endl;
		else if (!strcmp(t2,r2)) cout << "yes" << endl;
		else if (!strcmp(t2,r3)) cout << "yes" << endl;
		else if (!strcmp(t3,r1)) cout << "yes" << endl;
		else if (!strcmp(t3,r2)) cout << "yes" << endl;
		else if (!strcmp(t3,r3)) cout << "yes" << endl;
		else if (!strcmp(t4,r1)) cout << "yes" << endl;
		else if (!strcmp(t4,r2)) cout << "yes" << endl;
		else if (!strcmp(t4,r3)) cout << "yes" << endl;
		else if (!strcmp(t5,r1)) cout << "yes" << endl;
		else if (!strcmp(t5,r2)) cout << "yes" << endl;
		else if (!strcmp(t5,r3)) cout << "yes" << endl;
		else if (!strcmp(t6,r1)) cout << "yes" << endl;
		else if (!strcmp(t6,r2)) cout << "yes" << endl;
		else if (!strcmp(t6,r3)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}

