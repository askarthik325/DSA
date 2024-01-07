#include<bits/stdc++.h>
using namespace std;
int del(int arr[],int n, int x){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            break;
        }
    }
    if(i==n){
        return n;
    }
    for(int j=i;j<n-1;j++){
        arr[j]=arr[j+1];
    }return n-1;
}
int main(){
    int n,x;
    cout << "Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elments to the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< "Array before deleting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Enter element to delete: ";
    cin >>x;
    n=del(arr,n,x);
    cout<<"After deletion the arrays is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
}