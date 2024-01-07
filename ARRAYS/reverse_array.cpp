#include<bits/stdc++.h>
using namespace std;
int reverse(int arr[],int n){
    int low=0,high=n-1,temp;
    while(low<high){
        temp = arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
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
    reverse(arr,n);
    cout<<"reversed array is:";
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
}