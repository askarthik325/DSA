#include<iostream>
using namespace std;
int majority(int arr[],int n){
    // BY maren's voting alogritm
    int res=0,count=1;
    for(int i=1;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            res=i;
            count=1;
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }
    }
    if(count<=n/2){
        res=-1;
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
    cout<<majority(arr,n)<<" ";
    return 0;
}