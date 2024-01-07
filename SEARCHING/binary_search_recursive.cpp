#include <bits/stdc++.h>
using namespace std;
int bsearch(int arr[],int low,int high,int x){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]>x){
        return bsearch(arr,low,mid-1,x);
    }
    else{
        return bsearch(arr,mid+1,high,x);
    }
}
int main(){
    int n,low,high,x;
    cout<<"Enter the size of the array:";
    cin>>n;
    low=0,high=n-1;
    int arr[n];
    cout<<"Enter elements to the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search:";
    cin>>x;
    int k=bsearch(arr,low,high,x);
    if(k==-1){
        cout<<"Element not present in the array";
    }
    else{
        cout<<"Element present at index "<<k;
    }
}