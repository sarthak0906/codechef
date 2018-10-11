#include<bits/stdc++.h>

using namespace std;

int bfs(int arr[],int pre[],int low,int end){
	int mid = (low + end)/2;
	if (pre[end] - arr[mid] == 0) return mid;
	if (pre[end] - arr[mid-1] > 0 && pre[end] - arr[mid+1] < 0) return mid;
	if (pre[end] - arr[mid-1] > 0 && pre[end] - arr[mid+1] > 0) return bfs(arr,pre,mid,end);
	if (pre[end] - arr[mid-1] < 0 && pre[end] - arr[mid+1] < 0) return bfs(arr,pre,low,mid);
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int * arr = new int [n];
		int * pre = new int [n];
		for (int i=0;i<n;++i){
			cin >> arr[i];
			if (i==0) pre[i] = arr[i];
			else pre[i] = pre[i-1] + arr[i];
		}
		int a = bfs(arr,pre,0,n);
		cout << a << endl;
	}
	return 0;
}
