#include<bits/stdc++.h>
using namespace std;
void leaders(int a[],int n){
    for(int i=0;i<n;i++){
        bool flag= false;
        for(int j=i+1;j<n;j++){
            if(a[i]<=a[j]){
                flag= true;
                break;
            }
        }
        if(flag==false){
            cout<<a[i]<<" ";
        }
    }
}
// Efficient method
void leader(int a[], int n){
    int count=a[n-1];
    cout<<count<<" ";
    for(int i=n-2;i>=0;i--){
        if(count<a[i]){
            count=a[i];
            cout<<count<<" ";
        }
    }
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
    leaders(arr,n);
    cout<<endl;
    leader(arr,n);
    return 0;
    
}