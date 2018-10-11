#include<iostream>

using namespace  std;

int main()
{
	short int t;
	cin >> t;
	while (t--){
		long long int n;
		cin >> n;
		long long int *finger = new long long int[n];
		long long int *glove = new long long int[n];
		for (int i=0;i<n;++i){
			cin >> finger[i];
		}
		int a=0,b=0;
		for (int i=0;i<n;++i){
			cin >> glove[i];
			if (glove[i] < finger[i]) a++;
			if (glove[i] < finger[n-1-i]) b++;
		}
		if (a==0&&b==0) cout << "both" << endl;
		else if (a==0&&b!=0) cout << "front" << endl;
		else if (a!=0&&b==0) cout << "back" << endl;
		else if (a!=0&&b!=0) cout << "none" << endl;
	}
	return 0;
}
