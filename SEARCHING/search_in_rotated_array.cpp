#include<iostream>
using namespace std;
int search(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if (arr[low]<=arr[mid]){
            if(x>=arr[low]&&x<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(x>arr[mid]&&x<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }return -1;
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
    cout<<"Enter element to search:";
    cin>>x;
    int k = search(arr,n,x);
    if(k==-1){
        cout<<"Element not present in the array.";
    }
    else{
        cout<<"Element present at index "<<k;
    }
}