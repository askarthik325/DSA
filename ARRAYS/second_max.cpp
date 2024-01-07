#include<bits/stdc++.h>
using namespace std;
// NAIVE SOLUTION
int max(int arr[],int n){
    int max=arr[0];
    int index;
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            index=i;
        }
    }return index;
}
int secondmax(int arr[],int n){
    int largest=max(arr,n);
    int res=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[largest]){
            if(res==-1){
                res=i;
            }
            else if(arr[i]>arr[res]){
                res=i;
            }
        }
    }return res;
}
// EFFICIENT SOLUTION
int secmax(int arr[],int n){
    int largest=0,res=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }else if (arr[i]!=arr[largest]){
            if(res==-1||arr[i]>arr[res]){
                res=i;
            }
        }
    }return res;
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
    cout << "The second largest is at index "<< secondmax(arr,n)<< endl;
    cout << "The second largest is at index "<< secmax(arr,n);
}
