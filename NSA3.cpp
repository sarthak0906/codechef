#include<iostream>
#include<string.h>
#include<limits.h>

using namespace std;

void merge_sort(char arr[],int start,int end)
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
		char *left = new char [left_size];
		char *right = new char [right_size];
		for (int i =0;i<left_size ; ++i){
			left[i] = arr [start+i];
		}
		for (int i =0;i<right_size ; ++i){
			right[i] = arr [mid+1+i];
		} 
		left[left_size-1] = CHAR_MAX;
		right[right_size-1] = CHAR_MAX;
		int j=0 , i =0 ;
		for (int k = start; k<=(end);++k){
			if (left[i]<right[j]){
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

int fact (int n){
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return (n*fact(n-1));
}

int main(){
	int t;
	cin >> t;
	while (t--){
		char str[100000];
		cin >> str;
		char str1[100000];
		strcpy(str,str1);
		int n = strlen(str);
		merge_sort(str,0,n);
		int count = 0;
		for (int i=0;i<n;++i){
			if (str[i] != str1[i]) count++;
		}		
		cout << fact(count-1) << endl;
	}
	return 0;
}

