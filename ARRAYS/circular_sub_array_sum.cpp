#include<iostream>
using namespace std;
int sub_arr_sum(int arr[],int n){
    int res=arr[0],maxending=arr[0];
    for(int i=1;i<n;i++){
        maxending=max(arr[i],maxending+arr[i]);
        res=max(maxending,res);
    }return res;
}
int circular_sub_arr_sum(int arr[],int n){
    int max_normal=sub_arr_sum(arr,n);
    if(max_normal<0){
        return max_normal;
    }
    int arr_sum=0;
    for(int i=0;i<n;i++){
        arr_sum=arr_sum+arr[i];
        arr[i]=-arr[i];
    }
    int circular_sum=arr_sum+sub_arr_sum(arr,n);
    return max(max_normal,circular_sum);
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
    cout<<circular_sub_arr_sum(arr,n);
    return 0;
}