#include<bits/stdc++.h>
using namespace std;
int countsubsets(int arr[],int n, int sum){
    if(n==0){
        if(sum==0){
            return 1;
        }
        return 0;
    }return countsubsets(arr,n-1,sum)+countsubsets(arr,n-1,sum-arr[n-1]);
}
int main(){
    int n,sum;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "Enter element "<< i+1 <<" to the array :";
        cin >> arr[i]; 
    }
    cout << "Enter sum value:" ;
    cin >> sum;
    cout << "The subsets count is:" << countsubsets(arr,n,sum);
    return 0;
}