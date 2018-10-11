#include<iostream>
using namespace std;
int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int n;
        cin >> n;
        int *arr = new int[n];
        int *vote = new int[n];
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
            vote[i] = 0;
        }
        for(int i = 0; i < n; ++i){
            for(int right_sum = 0,right = i+1;right < n && right_sum <= arr[i];){
                vote[right]++;
                right++;
                if(right > i+1)right_sum+=arr[right-1];
            }
            for(int left_sum = 0,left = i-1;left >= 0 && left_sum <= arr[i];){
                vote[left]++;
                left--;
                if(left < i-1)left_sum+=arr[left+1];
            }
        }
        for(int i = 0; i < n; ++i){
            cout << vote[i] << " ";
        }
        cout << endl;
    }
}
