#include<iostream>
#include<limits.h>

using namespace std;

void merge_sort(int arr[],int start,int end)
{
	
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
		for (int i =0;i<left_size ; ++i)
		{
			left[i] = arr [start+i];
		}
		for (int i =0;i<right_size ; ++i)
		{
			right[i] = arr [mid+1+i];
		} 
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
	int * arr = new int [2*n];
	for (int i=0;i<(2*n);++i) cin >> arr[i];
	merge_sort(arr,0,(2*n)-1);
	
	cout << (arr[n-1] - arr[0]) * (arr[2*n - 1] - arr[n]) << endl;
	return 0;
}

