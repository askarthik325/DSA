#include<bits/stdc++.h>
using namespace std;
int max_diff(int arr[],int n){
    int res=0;//arr[1]-arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int diff=arr[j]-arr[i];
            res= max(res,diff);
        }
    }return res;
}
int max_dif(int arr[],int n){
    int res=arr[1]-arr[0];
    int min_val=arr[0];
    for(int i=1;i<n;i++){
        res=max(res,arr[i]-min_val);
        min_val=min(arr[i],min_val);
    }
    return res;
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
    cout<<max_dif(arr,n);
    return 0;
}