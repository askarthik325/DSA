#include<bits/stdc++.h>
using namespace std;
void left_rotate(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
int main(){
    int n;
    cout<<"Enter length of array:";
    cin >>n;
    int arr[n];
    cout << "Enter elements to array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    left_rotate(arr,n);
    cout << "Array after left rotate:";
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    return 0;
}