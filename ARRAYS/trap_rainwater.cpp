#include<bits/stdc++.h>
#include <cmath>
using namespace std;
int rainwater(int arr[],int n){
    int res=0;
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    for(int i=1;i<n;i++){
        lmax[i]=max(lmax[i-1],arr[i]);
    }
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rmax[i]=max(rmax[i+1],arr[i]);
    }
    for(int i=1;i<n-1;i++){
        res=res+(min(lmax[i],rmax[i]))-arr[i];
    }
    return res;
}
int main(){
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter elements to array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];    
    }
    cout<<"you can store "<<rainwater(arr,n)<<" units of water";
    return 0;
}