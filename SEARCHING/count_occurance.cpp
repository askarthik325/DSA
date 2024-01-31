#include<bits/stdc++.h>
using namespace std;
// function to find the first occurance of an element in an sorted array
int first_occ(int arr[],int n,int x){
    int mid;
    int low=0,high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==x){
            if(mid==0||arr[mid-1]!=arr[mid]){
                return mid;
            }
            else{
                high=mid-1;
            }
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return -1;

}
// function to find the last occurance of an element in an sorted array
int last_occ(int arr[],int n,int x){
    int mid;
    int low=0,high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==x){
            if(mid==n-1||arr[mid+1]!=arr[mid]){
                return mid;
            }
            else{
                low=mid+1;
            }
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return -1;

}
// function to find the no.of occurances of an element in an sorted array
int count_occ(int arr[],int n,int x){
    int first=first_occ(arr,n,x);
    if(first==-1){
        return -1;
    }
    else{
        return(last_occ(arr,n,x)-first+1);
    }
}
int main(){
    int n,x;
    cout<<"Enter the size of the array:";
    cin>> n;
    int arr[n];
    cout<<"Enter the elements to the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to find the occurences:";
    cin>>x;
    int k = count_occ(arr,n,x);
    if(k==-1){
        cout<<"Element not present in the array:";

    }
    else{
        cout <<"count of "<<x<< " is:"<<k;
    }
}