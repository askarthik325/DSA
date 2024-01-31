#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int x){
    int low=0,high=x-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            high= mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;


}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int x;
    cout << "Enter the element to search:";
    cin>>x;
    int k= search(arr,x);
    if(k==-1){
        cout<<"Element not present in the array.";
    }
    else{
        cout<<"Element present at index "<<k;
    }

}