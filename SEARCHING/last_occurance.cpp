#include<bits/stdc++.h>
using namespace std;
// Iterative solution
int last_occ(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            if(mid==n-1||arr[mid+1]!=arr[mid]){
                return mid;
            }
            else{
                low=mid+1;
            }
        }
        else if(arr[mid]>x){  // this is line for checking the array element greater than mid value
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int n,x;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements to the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< "Enter element to search:";
    cin>>x;
    int k=last_occ(arr,n,x);
    if(k==-1){
        cout<<"Element not present in array";
    }
    else{
        cout << "Element present at index "<<k;
    }
}