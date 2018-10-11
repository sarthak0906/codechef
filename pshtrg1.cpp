#include<iostream>
#include<limits.h>

using namespace std;
void merge_sort(int arr[],int start,int end){
	int mid = (start+end)/2;
	if (end-start){
		merge_sort(arr,start,mid);
		merge_sort(arr,mid+1,end);
		int left_size = mid-start+2;
		int right_size = end-mid+1;
		int *left = new int[left_size];
		int *right = new int[right_size];
		for (int i=0;i<left_size;++i) left[i] = arr[start+i];
		for (int i =0;i<right_size;++i) right[i] = arr[mid+1+i];
		left[left_size-1] = INT_MAX;
		right[right_size-1] = INT_MAX;
		int i=0,j=0;
		for (int k=0;k<end-start+1;++k){
			if (left[i]>right[j]) {
				arr[k] = left[i];
				i++;
			}
			else {
				arr[k] = right[j];
				++j;
			}
		}
	}
	else return ;
}
int main()
{
	int n,q;
	cin >> n,q;
	int *arr = new int[n];
	for (int i=0;i<n;++i) cin >> arr[i];
	while (q--){
		int l,r;
		cin >> l >> r;
		int *new_arr = new int [r-l+1];
		for (int i=0;i<(r-l+1);++i) new_arr[i] = arr[l+i-1];
		merge_sort(new_arr,0,r-l+1);
		for (int i=0;i<(r-l+1);++i){
			if (arr[i] < arr[i+1]+arr[i+2]) {
				cout << arr[i] + arr[i+1] + arr[i+2];
				break;
			}	
			else cout << "0" ;
		}
	}
	return 0;
}

