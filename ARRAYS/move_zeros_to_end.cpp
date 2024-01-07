#include<bits/stdc++.h>
using namespace std;
int zeros_to_end(int arr[],int n){
    int count=0,temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count++;
        }
    }
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
    cout<<zeros_to_end(arr,n);
    cout<<"Array after moving zeros:";
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
}