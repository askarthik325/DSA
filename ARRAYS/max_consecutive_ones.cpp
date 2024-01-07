#include<bits/stdc++.h>
using namespace std;
int ones(int arr[],int n){
    int res=0,count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            res=max(res,count);
        }
        else{
            count=0;
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
    cout<<"max consecutive 1's count is:"<<ones(arr,n);
    return 0;
}