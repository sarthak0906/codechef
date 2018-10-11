#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		double loss=0;
		cin >> n;
		while(n--){
			int price,discount,quantity;
			cin >> price >> quantity >> discount;
			loss += (quantity*price*discount*discount);
		}
//		cout << loss;
		loss /= 10000;
		printf("%12.9f\n",loss);
	}
	return 0;
}
