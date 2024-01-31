// this is the program that tells the sum of 2 pointers of the sorted array is equal to the given number .
// if sum equals it returns TRUE, otherwise it returns FALSE.
#include<bits/stdc++.h>
using namespace std;
bool twopointer(int arr[],int n,int x){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==x){
            return true;
        }
        else if(arr[i]+arr[j]>x){
            j--;
        }
        else{
            i++;
        }
    }
    return false;  
}
int main(){
    int n,x;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements to the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search the 2 pointer sum:";
    cin>>x;
    int k = twopointer(arr,n,x);
    if(k==1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}