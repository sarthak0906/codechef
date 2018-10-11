#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		int n,m;
		scanf("%d %d",&n,&m);
		int arr [n];
		for (int i=0;i<n;++i) scanf("%d",&arr[i]);
		int count = 0;
		for (int i=0;i<((1<<n)-1);++i){
			int test = 0;
			for (int j=0;j<n;++j){
				if (i&(1<<j)) 	test += arr[j];
			}
			if(test % m == 0) count ++;
		}
		printf("%d /n",count);
	}
	return 0;
}
