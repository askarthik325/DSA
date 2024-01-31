#include<bits/stdc++.h>
using namespace std;
int count_ones(int arr[],int n){
    int mid;
    int low =0,high=n;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==0){
            low=mid+1;
        }
        else if (mid==0||arr[mid-1]==arr[mid]){
            return (n-mid);
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>> n;
    int arr[n];
    cout<<"Enter the 0's / 1's in a sorted manner to the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k= count_ones(arr,n);
    if(k==-1){
        cout<<"There is no 1's in the array";
    }
    else{
        cout<<"count of 1's is:"<<k;
    }
}