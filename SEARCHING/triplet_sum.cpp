// this is the program that tells the sum of 3 pointers of the sorted array is equal to the given number .
// if sum equals it returns TRUE, otherwise it returns FALSE.
#include<bits/stdc++.h>
using namespace std;
bool twopointer(int arr[],int n,int x,int si){
     int i=si,j=n-1;//si stands for starting index.
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
bool triplet(int arr[],int n,int x){
    for(int i=0;i<n-2;i++){
        if(twopointer(arr,n,x-arr[i],i+1)){
            return true;
        }
    }return false;
}
int main(){
    int n,x;
    int si=0;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements to the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search the 3 pointer sum:";
    cin>>x;
    int k = triplet(arr,n,x);
    if(k==1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}