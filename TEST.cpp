#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
  int n;
  int flag = 0;
  while (scanf("%d",&n) == 1){
    if (!flag){
      if (n == 42) flag = 1;
      else cout << n << endl;
    }
  }
  return 0;
}
