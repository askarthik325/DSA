//program for rotating k position for an array
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int start,int end){
    int temp;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void left_rotate(int arr[],int n,int k){
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
}
int main(){
    int n,k;
    cout<<"Enter length of array:";
    cin >>n;
    int arr[n];
    cout << "Enter elements to array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "Enter how many position to left rotate array:";
    cin>>k;
    left_rotate(arr,n,k);
    cout << "Array after left rotate:";
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    return 0;
    
}