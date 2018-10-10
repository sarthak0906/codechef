#include<bits/stdc++.h>

using namespace std;

void merge_sort(int arr[],int start,int end)
{
//end is arr.size() -1	
	int mid = (end+start)/2;
	if (end-start)
	{
		merge_sort (arr,start,mid);	
		merge_sort (arr,mid+1,end);
		int left_size = mid-start+1;
		int right_size = end-mid;
		left_size++;
		right_size++;
		int *left = new int [left_size];
		int *right = new int [right_size];
		for (int i =0;i<left_size ; ++i)	left[i] = arr [start+i];
		for (int i =0;i<right_size ; ++i)right[i] = arr [mid+1+i];
		left[left_size-1] = INT_MAX;
		right[right_size-1] = INT_MAX;
		int j=0 , i =0 ;
		for (int k = start; k<=(end);++k)
		{
			if (left[i]<right[j])
			{
				arr[k]= left[i];
				i++;
			}
			else {
				arr[k] = right[j];
				j++;
			}
		}
	}
	else return;
}

int main(){
	int n;
	cin >> n;
	int * a = new int [n];
	int * b = new int [n];
	for (int i=0;i<n;++i) cin >> a[i];
	for (int i=0;i<n;++i) cin >> b[i];
	merge_sort(a,0,n-1);
	merge_sort(b,0,n-1);
	for (int i=0;i<n;++i) cout << a[i] << " ";
	cout << endl;
	for (int i=0;i<n;++i) cout << b[i] << " ";
	cout << endl;
	int i = n-1, j =n-1;
	long long int sa = 0;
	long long int sb = 0;
	for (int k=0;k<(2*n);++k){
		cout << " k = " << k << endl;
		if (k%2){
			if (j < 0) i--;
			else if (i < 0){
				sb += b[j];
				j--;
			}
			else if (a[i] > b[j]) i--;
			else {
				sb += b[j];
				j--;
			}
		}
		else {
			if (i < 0) j--;
			else if (j <0) {
				sa += a[i];
				i--;
			}
			if (b[j] > a[i]) j--;
			else {
				sa += a[i];
				i--;
			}
		}
		cout << " i = " << i << " a[i] = " << a[i] << endl;
		cout << " j = " << j << " b[j] = " << b[j] << endl;
		cout << " sa = " << sa << endl;
		cout << " sb = " << sb << endl;
	}
	cout << setprecision(0) << sa - sb ;
	return 0;
}
