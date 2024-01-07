#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
    int n,pos,cap,x;
    cout << "Enter the size of the array:";
    cin >> n;
    cout << "Enter elements to the array:";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    cout << "Before insertion:";
    for(int i=0;i<n;i++){
        cout<<arr[i];   
    }
    cout<<endl << "Enter elment to insert:";
    cin >> x;
    cout << "Enter position to insert:";
    cin>> pos;
    cap = sizeof(arr) / sizeof(int);
    if(n==cap){
        cout << "array is full...!";
    }
    else{
        int index=pos-1;
        for(int i=n-1;i>=index;i--){
            arr[i+1]=arr[i];
        }
        arr[index]=x;
        n=n+1;
        cout << "array after insering:";
        for(int i=0;i<n;i++){
            cout<<arr[i];
        }
    }
   
    
}