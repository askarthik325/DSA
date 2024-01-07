#include<bits/stdc++.h>
using namespace std;
void max(int arr[],int n){
    int max=arr[0];
    int index;
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            index = i;
        }
    }
    cout << "The max element is " << max << endl;
    cout << "Max element is at index position "<< index;

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
    max(arr,n);
}