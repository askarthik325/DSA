#include<iostream>
using namespace std;
int max_subarray_sum(int arr[],int n){
    int res=arr[0];
    int max_ending=arr[0];
    for(int i=1;i<n;i++){
        max_ending=max(max_ending+arr[i],arr[i]);
        res= max(res,max_ending);
    }
    return res;
}
int sub_array(int arr[],int n){
    int max_sum=0;
    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            curr=curr+arr[j];
            max_sum=max(max_sum,curr);
        }
    }return max_sum;
}
int main(){
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter elements to array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];    
    }
    cout<<max_subarray_sum(arr,n)<<" ";
    cout<<sub_array(arr,n);
    return 0;
}