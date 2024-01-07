#include<bits/stdc++.h>
using namespace std;
int duplicates(int arr[],int n){    
    int res=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }return res;
}
int main(){
    int n;
    cout<<"Enter the array length:";
    cin >>n;
    int arr[n];
    cout<< "Enter elements to array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    n=duplicates(arr,n);
    cout<<"Array after removing duplicates:";
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
}