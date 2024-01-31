#include<bits/stdc++.h>
using namespace std;
int peak(int arr[],int n){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if((mid==0||arr[mid-1]<=arr[mid])&&(mid==n-1||arr[mid+1]<=arr[mid])){
            return mid;
        }else if(mid>0&& arr[mid-1]>=arr[mid]){
            high=mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements to the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=peak(arr,n);
    if(k==-1){
        cout<<"Element no peak element in array";
    }
    else{
        cout << "Peak element present at index "<<k;
    }
}